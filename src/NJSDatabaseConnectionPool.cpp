// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#include "NJSDatabaseConnectionPool.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

std::shared_ptr<DatabaseConnection> NJSDatabaseConnectionPool::getConnection()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSDatabaseConnectionPool::getConnection fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getConnection").ToLocalChecked()).ToLocalChecked();
    auto result_getConnection = Nan::CallAsFunction(calling_funtion->ToObject(Nan::GetCurrentContext()).ToLocalChecked(),local_njs_impl,0,args);
    if(result_getConnection.IsEmpty())
    {
        Nan::ThrowError("NJSDatabaseConnectionPool::getConnection call failed");
    }
    auto checkedResult_getConnection = result_getConnection.ToLocalChecked();
    Local<Object> njs_fResult_getConnection = checkedResult_getConnection->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto fResult_getConnection = djinni::js::ObjectWrapper<ledger::core::api::DatabaseConnection>::Unwrap(njs_fResult_getConnection);

    return fResult_getConnection;
}

NAN_METHOD(NJSDatabaseConnectionPool::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSDatabaseConnectionPool function can only be called as constructor (use New)");
    }

    if(!info[0]->IsObject())
    {
        return Nan::ThrowError("NJSDatabaseConnectionPool::New requires an implementation from node");
    }
    auto node_instance = std::make_shared<NJSDatabaseConnectionPool>(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked());
    djinni::js::ObjectWrapper<NJSDatabaseConnectionPool>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSDatabaseConnectionPool::DatabaseConnectionPool_prototype;

Local<Object> NJSDatabaseConnectionPool::wrap(const std::shared_ptr<ledger::core::api::DatabaseConnectionPool> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(DatabaseConnectionPool_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::DatabaseConnectionPool>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSDatabaseConnectionPool::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

void NJSDatabaseConnectionPool::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSDatabaseConnectionPool::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSDatabaseConnectionPool").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"New", New);
    //Set object prototype
    DatabaseConnectionPool_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSDatabaseConnectionPool").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}

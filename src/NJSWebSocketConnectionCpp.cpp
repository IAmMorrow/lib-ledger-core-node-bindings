// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from websocket_client.djinni

#include "NJSWebSocketConnectionCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSWebSocketConnection::onConnect) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWebSocketConnection::onConnect needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WebSocketConnection>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWebSocketConnection::onConnect : implementation of WebSocketConnection is not valid");
    }
    cpp_impl->onConnect(arg_0);
}
NAN_METHOD(NJSWebSocketConnection::onClose) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWebSocketConnection::onClose needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WebSocketConnection>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWebSocketConnection::onClose : implementation of WebSocketConnection is not valid");
    }
    cpp_impl->onClose();
}
NAN_METHOD(NJSWebSocketConnection::onMessage) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWebSocketConnection::onMessage needs 1 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WebSocketConnection>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWebSocketConnection::onMessage : implementation of WebSocketConnection is not valid");
    }
    cpp_impl->onMessage(arg_0);
}
NAN_METHOD(NJSWebSocketConnection::onError) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSWebSocketConnection::onError needs 2 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = (ledger::core::api::ErrorCode)Nan::To<int>(info[0]).FromJust();
    Nan::Utf8String string_arg_1(info[1]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_1 = std::string(*string_arg_1);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WebSocketConnection>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWebSocketConnection::onError : implementation of WebSocketConnection is not valid");
    }
    cpp_impl->onError(arg_0,arg_1);
}
NAN_METHOD(NJSWebSocketConnection::getConnectionId) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWebSocketConnection::getConnectionId needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WebSocketConnection>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWebSocketConnection::getConnectionId : implementation of WebSocketConnection is not valid");
    }

    auto result = cpp_impl->getConnectionId();

    //Wrap result in node object
    auto arg_0 = Nan::New<Int32>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSWebSocketConnection::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSWebSocketConnection function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSWebSocketConnection::WebSocketConnection_prototype;

Local<Object> NJSWebSocketConnection::wrap(const std::shared_ptr<ledger::core::api::WebSocketConnection> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(WebSocketConnection_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::WebSocketConnection>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSWebSocketConnection::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSWebSocketConnection::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::WebSocketConnection>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSWebSocketConnection::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSWebSocketConnection::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSWebSocketConnection").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"onConnect", onConnect);
    Nan::SetPrototypeMethod(func_template,"onClose", onClose);
    Nan::SetPrototypeMethod(func_template,"onMessage", onMessage);
    Nan::SetPrototypeMethod(func_template,"onError", onError);
    Nan::SetPrototypeMethod(func_template,"getConnectionId", getConnectionId);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    WebSocketConnection_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSWebSocketConnection").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}

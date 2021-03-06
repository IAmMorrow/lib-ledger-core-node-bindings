// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from emitter.djinni

#include "NJSEventPublisherCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSEventPublisher::getEventBus) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEventPublisher::getEventBus needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EventPublisher>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEventPublisher::getEventBus : implementation of EventPublisher is not valid");
    }

    auto result = cpp_impl->getEventBus();

    //Wrap result in node object
    auto arg_0 = NJSEventBus::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEventPublisher::post) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEventPublisher::post needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::Event>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSEvent failed");
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EventPublisher>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEventPublisher::post : implementation of EventPublisher is not valid");
    }
    cpp_impl->post(arg_0);
}
NAN_METHOD(NJSEventPublisher::postSticky) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSEventPublisher::postSticky needs 2 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::Event>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSEvent failed");
    }

    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EventPublisher>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEventPublisher::postSticky : implementation of EventPublisher is not valid");
    }
    cpp_impl->postSticky(arg_0,arg_1);
}
NAN_METHOD(NJSEventPublisher::relay) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEventPublisher::relay needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::EventBus>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSEventBus failed");
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EventPublisher>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEventPublisher::relay : implementation of EventPublisher is not valid");
    }
    cpp_impl->relay(arg_0);
}
NAN_METHOD(NJSEventPublisher::newInstance) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEventPublisher::newInstance needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::ExecutionContext>::Unwrap(njs_arg_0);


    auto result = ledger::core::api::EventPublisher::newInstance(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSEventPublisher::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}

NAN_METHOD(NJSEventPublisher::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSEventPublisher function can only be called as constructor (use New)");
    }

    //Check if NJSEventPublisher::New called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEventPublisher::New needs same number of arguments as ledger::core::api::EventPublisher::newInstance method");
    }

    //Unwrap objects to get C++ classes
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::ExecutionContext>::Unwrap(njs_arg_0);


    //Call factory
    auto cpp_instance = ledger::core::api::EventPublisher::newInstance(arg_0);
    djinni::js::ObjectWrapper<ledger::core::api::EventPublisher>::Wrap(cpp_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSEventPublisher::EventPublisher_prototype;

Local<Object> NJSEventPublisher::wrap(const std::shared_ptr<ledger::core::api::EventPublisher> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(EventPublisher_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::EventPublisher>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSEventPublisher::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSEventPublisher::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::EventPublisher>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSEventPublisher::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSEventPublisher::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSEventPublisher").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getEventBus", getEventBus);
    Nan::SetPrototypeMethod(func_template,"post", post);
    Nan::SetPrototypeMethod(func_template,"postSticky", postSticky);
    Nan::SetPrototypeMethod(func_template,"relay", relay);
    Nan::SetPrototypeMethod(func_template,"newInstance", newInstance);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    EventPublisher_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSEventPublisher").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}

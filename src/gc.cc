#include <nan.h>

NAN_METHOD(Collect) {
  info.GetIsolate()->IdleNotificationDeadline(5.0);
}

void Init(v8::Handle<v8::Object> target){
  Nan::SetMethod(target, "collect", Collect);
}

NODE_MODULE(gc, Init);

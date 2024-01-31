@interface _EARLmLoader2 : NSObject {
    struct shared_ptr<quasar::LmLoader2> { struct LmLoader2 *__ptr_; struct __shared_weak_count *__cntrl_; } _loader;
}

+ (void)initialize;

- (id)init;
- (void)invalidate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)fetchOrLoadModelWithDirectory:(id)a0 recognizer:(id)a1;
- (id)initWithRoot:(id)a0;
- (id)loadForRecognitionWithDirectory:(id)a0 recognizer:(id)a1 task:(id)a2 applicationName:(id)a3;

@end

@class NSError, _TtC5AskTo10ATQuestion, _TtC5AskTo16ATDispatchCenter;

@interface AskTo.ATDispatchCenter : NSObject {
    void /* unknown type, empty encoding */ dispatcher;
    void /* unknown type, empty encoding */ responseListeners;
}

@property (class, nonatomic, readonly) _TtC5AskTo16ATDispatchCenter *shared;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addResponseListener:(id)a0;
- (void)removeResponseListener:(id)a0;
- (void)send:(_TtC5AskTo10ATQuestion *)a0 to:(short)a1 completionHandler:(void (^)(NSError *))a2;

@end

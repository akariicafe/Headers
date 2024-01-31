@class SAThread, SADispatchQueue, SASwiftTask;

@interface SAThreadCallTree : SACallTree

@property (readonly) SAThread *thread;
@property (readonly) SADispatchQueue *dispatchQueue;
@property (readonly) SASwiftTask *swiftTask;

- (void).cxx_destruct;

@end

@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PDCPreflightRequestHandle : NSObject <PDCPreflightRequestCanceling> {
    struct atomic_flag { _Atomic BOOL _Value; } _isComplete;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alreadyCompletedRequestHandle;

@end

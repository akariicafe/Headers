@class NSString, NSObject;

@interface AVNotificationSubscription : NSObject <AVCancellable> {
    NSObject *_object;
    id _observerToken;
    id /* block */ _callback;
    struct OpaqueFigSimpleMutex { } *_cancelMutex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

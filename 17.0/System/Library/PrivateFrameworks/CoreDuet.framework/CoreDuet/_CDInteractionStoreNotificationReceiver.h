@class NSObject;
@protocol OS_dispatch_queue;

@interface _CDInteractionStoreNotificationReceiver : NSObject {
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)postPackedMechanisms:(unsigned long long)a0;

@end

@class NSMutableDictionary, _CDXPCEventPublisher, BMIntentStream, NSObject;
@protocol OS_dispatch_queue;

@interface _CDAppIntentNotifier : NSObject <_CDXPCEventPublisherDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    _CDXPCEventPublisher *_xpcPublisher;
    NSMutableDictionary *_subscribers;
    BOOL _isRootProcess;
    BMIntentStream *_intentStream;
}

+ (id)sharedInstance;

- (id)init;
- (void)removeSubscriberWithToken:(unsigned long long)a0 streamName:(id)a1;
- (void).cxx_destruct;
- (void)handleXPCNotificationEvent:(id)a0;
- (void)addSubscriber:(id)a0;
- (void)_publishXPCEvent:(id)a0 uid:(unsigned int)a1;
- (void)publishXPCEventForAppIntents:(id)a0 uid:(unsigned int)a1;
- (void)publishXPCEventForDeletedIntentGroupIdentifiers:(id)a0 bundleID:(id)a1 uid:(unsigned int)a2;
- (void)publishXPCEventForDeletedIntentIdentifiers:(id)a0 bundleID:(id)a1 uid:(unsigned int)a2;

@end

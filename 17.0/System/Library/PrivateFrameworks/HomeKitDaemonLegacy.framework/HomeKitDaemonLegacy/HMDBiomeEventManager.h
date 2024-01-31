@class NSObject, BMHomeKitClientMediaAccessoryControlStream, BMHomeKitClientAccessoryControlStream, BMHomeKitClientActionSetStream, NSNotificationCenter;
@protocol OS_dispatch_queue;

@interface HMDBiomeEventManager : HMFObject

@property (readonly) BMHomeKitClientActionSetStream *actionSetStream;
@property (readonly) BMHomeKitClientMediaAccessoryControlStream *mediaAccessoryStream;
@property (readonly) BMHomeKitClientAccessoryControlStream *hapAccessoryStream;
@property (readonly) id /* block */ prunableStreamFactory;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (id)init;
- (void)deleteAllEvents;
- (void).cxx_destruct;
- (void)_handleHomeRemovedNotification:(id)a0;
- (void)_handleAccessoryRemovedNotification:(id)a0;
- (void)_handleActionSetEmptiedNotification:(id)a0;
- (void)_handleServiceRemovedNotification:(id)a0;
- (void)_submitAccessoryEvent:(id)a0;
- (void)_submitActionSetEvent:(id)a0;
- (void)_submitMediaAccessoryEvent:(id)a0;
- (void)fetchMostRecentEventWithCharacteristicType:(id)a0 serviceType:(id)a1 homeSPIClientIdentifier:(id)a2 completion:(id /* block */)a3;
- (id)initWithNotificationCenter:(id)a0 actionSetStream:(id)a1 mediaAccessoryStream:(id)a2 accessoryStream:(id)a3 prunableStreamFactory:(id /* block */)a4 workQueue:(id)a5;
- (void)submitAccessoryEvent:(id)a0;
- (void)submitActionSetEvent:(id)a0;
- (void)submitMediaAccessoryEvent:(id)a0;

@end

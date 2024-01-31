@class NSMutableDictionary;

@interface HMDCameraSignificantEventNotificationFilter : HMFObject

@property (readonly, nonatomic) NSMutableDictionary *primaryResidentSignificantEventNotificationsByUUID;
@property (readonly, nonatomic) NSMutableDictionary *cloudSignificantEventsByUUID;

+ (BOOL)isRelevantSignificantEventDate:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isSignificantEventRelevantWithUUID:(id)a0 isFromPrimary:(BOOL)a1;
- (void)_pruneCloudSignificantEvents;
- (void)_prunePrimaryResidentSignificantEvents;
- (void)addIncomingCloudSignificantEvent:(id)a0;
- (void)addIncomingPrimaryResidentSignificantEventNotificationWithUUID:(id)a0 notificationReasons:(unsigned long long)a1 date:(id)a2;
- (id)consumeCloudSignificantEventWithUUID:(id)a0;
- (id)consumePrimaryResidentSignificantEventWithUUID:(id)a0;

@end

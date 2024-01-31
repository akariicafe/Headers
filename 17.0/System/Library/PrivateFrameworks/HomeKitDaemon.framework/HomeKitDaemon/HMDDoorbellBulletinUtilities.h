@class NSString;

@interface HMDDoorbellBulletinUtilities : HMFObject <HMFLogging, HMDDoorbellBulletinUtilities>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_localizedDoorbellMessageForSignificantEvents:(id)a0 forAudioAccessory:(BOOL)a1;
+ (id)_significantEventsWithinTimeWindowOfDoorbellPress:(id)a0 forCameraProfile:(id)a1;
+ (id)clipUUIDsForCoalesceableSignificantEvents:(id)a0;
+ (id)faceClassificationsNearDateOfDoorbellPress:(id)a0 forCameraProfile:(id)a1;
+ (id)localizedAudioAccessoryAnnounceMessageForSignificantEvents:(id)a0;
+ (id)localizedDoorbellMessageForSignificantEvents:(id)a0;
+ (id)localizedMessageForCharacteristic:(id)a0;
+ (id)significantEventsRelevantToDoorbellPress:(id)a0 forCameraProfile:(id)a1;


@end

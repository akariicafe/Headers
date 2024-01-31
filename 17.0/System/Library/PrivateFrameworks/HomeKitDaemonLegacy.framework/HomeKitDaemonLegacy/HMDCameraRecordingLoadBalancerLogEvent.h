@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDCameraRecordingLoadBalancerLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, copy) NSNumber *numberOfResidents;
@property (readonly, copy) NSNumber *numberOfRetries;
@property (readonly, copy) NSNumber *totalNumberOfJobSlots;
@property (readonly, copy) NSNumber *remainingNumberOfJobSlots;
@property (readonly, copy) NSString *selectedResidentDeviceType;
@property (readonly, copy) NSNumber *selectedResidentSystemResourceUsageLevel;
@property (readonly, copy) NSNumber *selectedResidentNumberOfActiveStreams;
@property (readonly, copy) NSNumber *selectedResidentJobSlots;
@property (readonly, copy) NSNumber *selectedResidentPartialJobSlots;
@property (readonly) BOOL selectedResidentHasActiveSessionWithCamera;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithNumberOfResidents:(id)a0 numberOfRetries:(id)a1 totalNumberOfJobSlots:(id)a2 remainingNumberOfJobSlots:(id)a3 selectedResidentDeviceType:(id)a4 selectedResidentNumberOfActiveStreams:(id)a5 selectedResidentSystemResourceUsageLevel:(id)a6 selectedResidentJobSlots:(id)a7 selectedResidentPartialJobSlots:(id)a8 selectedResidentHasActiveSessionWithCamera:(BOOL)a9;

@end

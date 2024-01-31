@class NSArray, NSString, NSDictionary, NSUUID;

@interface HMDHouseholdActivityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, nonatomic) NSArray *contributors;
@property unsigned long long requestCount;
@property unsigned long long activeDeviceCount;
@property unsigned long long numReadSiri;
@property unsigned long long numWriteSiri;
@property unsigned long long numReadFirstPartyApp;
@property unsigned long long numWriteFirstPartyApp;
@property unsigned long long numReadThirdPartyApp;
@property unsigned long long numWriteThirdPartyApp;
@property unsigned long long numAccessoriesAdded;
@property unsigned long long numScenesAdded;
@property unsigned long long numTriggersAdded;
@property unsigned long long numShortcutsAdded;
@property unsigned long long numScenesUserRun;
@property unsigned long long numShortcutsRun;
@property unsigned long long numTriggersFired;
@property unsigned long long cameraStreamStartSuccessCount;
@property unsigned long long cameraStreamStartFailureCount;
@property unsigned long long fetchCameraClipVideoSegmentAssetCount;
@property unsigned long long activeDaysBitField;
@property (getter=isActiveDay) BOOL activeDay;
@property long long countOfDaysSinceLastActive;
@property long long activeDaysPerMonthCount;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)coalescedEventFromHouseholdActivityLogEvents:(id)a0 homeUUID:(id)a1 contributors:(id)a2;

@end

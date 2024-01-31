@class NSString, NSDictionary, NSUUID;

@interface HMDUserSettingsPerHomeLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly) BOOL isOwner;
@property (readonly) BOOL isAdmin;
@property (readonly) BOOL isRemoteAccessAllowed;
@property (readonly) BOOL isRecognizeMyVoiceEnabled;
@property (readonly) BOOL isPersonalRequestsEnabled;
@property (readonly) BOOL isAnnounceAccessAllowed;
@property (readonly) unsigned long long camerasAccessLevel;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithUser:(id)a0;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (id)initWithUser:(id)a0 userDataController:(id)a1 homeUUID:(id)a2;

@end

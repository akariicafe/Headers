@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDUserCloudShareOwnerAdoptionDailyEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, copy) NSNumber *configureState;
@property (readonly, copy) NSNumber *isPrimaryResident;
@property (readonly, copy) NSNumber *hasSharedUser;
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveAccepted;
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveCloudShareIDAndHaveAccepted;
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveCloudShareIDButNotAccepted;
@property (readonly, copy) NSNumber *percentageOfNonAcceptedParticipantsWithKnownCapability;
@property (readonly, copy) NSNumber *percentageOfUsersThatAreNotParticipant;
@property (readonly, copy) NSNumber *percentageOfParticipatingUsersThatNotAccepted;
@property (readonly, copy) NSNumber *percentageOfAcceptedParticipantsWithoutCloudShareID;
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
- (id)initWithConfigureState:(long long)a0 isPrimaryResident:(BOOL)a1 trustStatusCounts:(struct CloudShareTrustManagerTrustStatusCounts { long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })a2;

@end

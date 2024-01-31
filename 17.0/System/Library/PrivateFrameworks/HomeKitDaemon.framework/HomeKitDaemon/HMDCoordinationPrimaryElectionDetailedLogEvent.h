@class NSString, NSDictionary, NSUUID;

@interface HMDCoordinationPrimaryElectionDetailedLogEvent : HMDCoordinationPrimaryElectionLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly) unsigned long long electionTriggerReason;
@property (readonly) unsigned long long confirmationCriteria;
@property (readonly) BOOL meshAndPrimaryCandidateCountEqual;
@property (readonly) BOOL previousPrimaryInMesh;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithIsPrimary:(BOOL)a0 didChangePrimary:(BOOL)a1 electionTriggerReason:(unsigned long long)a2 confirmationCriteria:(unsigned long long)a3 meshAndPrimaryCandidateCountEqual:(BOOL)a4 previousPrimaryInMesh:(BOOL)a5;

@end

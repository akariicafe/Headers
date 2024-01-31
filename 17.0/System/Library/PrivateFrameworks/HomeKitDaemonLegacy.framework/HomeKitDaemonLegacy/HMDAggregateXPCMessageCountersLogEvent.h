@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDAggregateXPCMessageCountersLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, nonatomic) NSString *peerInformation;
@property (readonly, nonatomic) NSString *messageName;
@property (readonly) BOOL isPrimaryResident;
@property (readonly, nonatomic) NSNumber *count;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcAcceptedCountersLogEventWithPeerInformation:(id)a0 messageName:(id)a1 isPrimaryResident:(BOOL)a2 count:(id)a3;
+ (id)xpcSentCountersLogEventWithPeerInformation:(id)a0 messageName:(id)a1 isPrimaryResident:(BOOL)a2 count:(id)a3;

- (void).cxx_destruct;
- (id)initWithEventName:(id)a0 peerInformation:(id)a1 messageName:(id)a2 isPrimaryResident:(BOOL)a3 count:(id)a4;

@end

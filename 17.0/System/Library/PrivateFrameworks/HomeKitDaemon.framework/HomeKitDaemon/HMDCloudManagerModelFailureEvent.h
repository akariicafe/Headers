@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDCloudManagerModelFailureEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, copy) NSString *model;
@property (readonly, copy) NSNumber *failureCode;
@property (readonly, copy) NSString *errorDomain;
@property (readonly, copy) NSNumber *errorCode;
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
- (id)attributeDescriptions;
- (id)initWithModel:(id)a0 failureCode:(unsigned long long)a1 error:(id)a2;

@end

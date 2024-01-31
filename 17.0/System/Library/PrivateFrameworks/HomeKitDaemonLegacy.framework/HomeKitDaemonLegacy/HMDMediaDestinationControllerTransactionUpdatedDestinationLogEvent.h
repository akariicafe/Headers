@class NSString, NSDictionary, NSUUID;

@interface HMDMediaDestinationControllerTransactionUpdatedDestinationLogEvent : HMDMediaDestinationControllerDestinationLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithExistingDestinationType:(id)a0 destinationType:(id)a1 isTriggeredOnControllerDevice:(id)a2 userPrivilege:(id)a3;

@end

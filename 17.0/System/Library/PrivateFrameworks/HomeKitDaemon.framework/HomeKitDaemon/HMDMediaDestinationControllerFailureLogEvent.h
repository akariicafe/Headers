@class NSString, NSDictionary, NSUUID;

@interface HMDMediaDestinationControllerFailureLogEvent : HMDMediaDestinationControllerLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, copy) NSString *destinationControllerErrorCode;
@property (readonly, copy) NSString *errorCode;
@property (readonly, copy) NSString *errorDomain;
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
- (id)initWithDestinationControllerErrorCode:(id)a0 errorCode:(id)a1 errorDomain:(id)a2 isTriggeredOnControllerDevice:(id)a3 userPrivilege:(id)a4;

@end

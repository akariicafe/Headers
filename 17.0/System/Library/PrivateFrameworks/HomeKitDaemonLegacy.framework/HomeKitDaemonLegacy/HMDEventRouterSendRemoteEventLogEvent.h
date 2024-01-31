@class NSString, NSDictionary, NSUUID;

@interface HMDEventRouterSendRemoteEventLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, copy, nonatomic) NSString *topic;
@property (readonly, nonatomic) unsigned long long sourceDeviceType;
@property (readonly, nonatomic) unsigned long long destinationDeviceType;
@property (readonly, nonatomic) BOOL isCachedEvent;
@property (readonly, nonatomic) unsigned long long responseMessageType;
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
- (id)initWithTopic:(id)a0 sourceDeviceType:(unsigned long long)a1 destinationDeviceType:(unsigned long long)a2 isCachedEvent:(BOOL)a3 responseMessageType:(unsigned long long)a4;

@end

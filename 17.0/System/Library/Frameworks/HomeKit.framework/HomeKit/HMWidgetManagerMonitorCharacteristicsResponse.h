@class NSDictionary;

@interface HMWidgetManagerMonitorCharacteristicsResponse : NSObject

@property (readonly, copy) NSDictionary *valueByCharacteristicUniqueIdentifier;
@property (readonly, copy) NSDictionary *reachabilityByAccessoryUniqueIdentifier;

- (void).cxx_destruct;
- (id)initWithValueByCharacteristicUniqueIdentifier:(id)a0 reachabilityByAccessoryUniqueIdentifier:(id)a1;

@end

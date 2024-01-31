@interface WiFiSettlementConfiguration : NSObject

@property (nonatomic) unsigned long long maxScansWithoutMatchForUnsettlement;
@property (nonatomic) unsigned long long maxNetworksForSettlement;
@property (nonatomic) double lowConfidenceSettlementTime;
@property (nonatomic) double highConfidenceSettlementTime;

- (id)init;
- (id)description;

@end

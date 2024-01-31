@interface AFMyriadMetricsAdditionalContext : NSObject

@property (readonly, nonatomic) unsigned char rawGoodnessScore;
@property (readonly, nonatomic) unsigned char goodnessScore;
@property (readonly, nonatomic) unsigned char deviceClass;
@property (readonly, nonatomic) unsigned char deviceProductType;

- (id)description;
- (id)initWithRawGoodnessScore:(unsigned char)a0 goodnessScore:(unsigned char)a1 deviceClass:(unsigned char)a2 deviceProductType:(unsigned char)a3;

@end

@class NSString, PKToolConfiguration, UIColor;

@interface PKCustomTool : PKTool

@property (readonly, nonatomic) NSString *customIdentifier;
@property (readonly, copy, nonatomic) PKToolConfiguration *customConfigurationCopy;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) double weight;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithColor:(id)a0;
- (id)copyWithWeight:(double)a0;
- (id)copyWithScrubbedColor:(id)a0;
- (id)copyWithScrubbedWeight:(double)a0;
- (id)initWithCustomIdentifier:(id)a0 configuration:(id)a1 color:(id)a2 weight:(double)a3;

@end

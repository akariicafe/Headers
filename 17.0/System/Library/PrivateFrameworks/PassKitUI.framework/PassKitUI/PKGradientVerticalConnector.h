@class UIColor;

@interface PKGradientVerticalConnector : NSObject

@property (readonly, nonatomic) UIColor *topGradientColor;
@property (readonly, nonatomic) UIColor *bottomGradientColor;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTopGradientColor:(id)a0 bottomGradientColor:(id)a1;

@end

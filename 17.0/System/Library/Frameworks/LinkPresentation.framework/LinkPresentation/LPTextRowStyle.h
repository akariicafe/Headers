@class LPTextViewStyle;

@interface LPTextRowStyle : NSObject

@property (readonly, nonatomic) LPTextViewStyle *leading;
@property (readonly, nonatomic) LPTextViewStyle *trailing;
@property (nonatomic) long long balancingMode;

- (id)left;
- (id)right;
- (void).cxx_destruct;
- (void)applyToAllTextViewStyles:(id /* block */)a0;
- (id)initWithPlatform:(long long)a0 fontScalingFactor:(double)a1;

@end

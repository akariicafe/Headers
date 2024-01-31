@class LPPointUnit;

@interface LPPadding : NSObject <LPCSSText, NSCopying>

@property (retain, nonatomic) LPPointUnit *top;
@property (retain, nonatomic) LPPointUnit *leading;
@property (retain, nonatomic) LPPointUnit *bottom;
@property (retain, nonatomic) LPPointUnit *trailing;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })asInsetsForLTR:(BOOL)a0;
- (id)_lp_CSSText;

@end

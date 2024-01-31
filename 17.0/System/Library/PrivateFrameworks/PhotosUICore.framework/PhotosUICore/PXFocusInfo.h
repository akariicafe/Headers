@class NSString, UIView;

@interface PXFocusInfo : NSObject

@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) NSString *cornerCurve;
@property (nonatomic) BOOL wantsInnerBorder;
@property (nonatomic) BOOL wantsOuterBorder;

+ (id)focusInfoWithView:(id)a0;
+ (id)focusInfoWithView:(id)a0 cornerRadius:(double)a1 cornerCurve:(id)a2;

- (void).cxx_destruct;
- (id)makeHaloEffectForSourceView:(id)a0;

@end

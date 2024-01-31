@class CSProminentLayoutController;
@protocol UITraitEnvironment;

@interface PREditorElementLayoutController : NSObject

@property (readonly, nonatomic) CSProminentLayoutController *csLayoutController;
@property (weak, nonatomic) id<UITraitEnvironment> traitEnvironment;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForElements:(unsigned long long)a0 variant:(unsigned long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForElements:(unsigned long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForElements:(unsigned long long)a0 variant:(unsigned long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForElements:(unsigned long long)a0;
+ (void)clearRegisteredBoundingRectForTitleLayout:(unsigned long long)a0;
+ (void)registerBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forTitleLayout:(unsigned long long)a1 variant:(unsigned long long)a2;

- (void)setNumberingSystem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForElements:(unsigned long long)a0 variant:(unsigned long long)a1 withBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)setFourDigitTime:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForElements:(unsigned long long)a0 withBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForElements:(unsigned long long)a0 variant:(unsigned long long)a1 withBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForElements:(unsigned long long)a0 withBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithTraitEnvironment:(id)a0;
- (id)boundsAttributesForElements:(unsigned long long)a0 variant:(unsigned long long)a1 titleLayout:(unsigned long long)a2 withBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)frameAttributesForElements:(unsigned long long)a0 variant:(unsigned long long)a1 titleLayout:(unsigned long long)a2 withBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end

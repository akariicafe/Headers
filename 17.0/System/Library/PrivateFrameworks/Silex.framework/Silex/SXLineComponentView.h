@class CALayer, SXSolidBorderView;

@interface SXLineComponentView : SXComponentView

@property (retain, nonatomic) CALayer *strokeLayer;
@property (retain, nonatomic) SXSolidBorderView *borderView;

- (void)discardContents;
- (void).cxx_destruct;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)renderContents;
- (void)loadComponent:(id)a0;
- (BOOL)userInteractable;

@end

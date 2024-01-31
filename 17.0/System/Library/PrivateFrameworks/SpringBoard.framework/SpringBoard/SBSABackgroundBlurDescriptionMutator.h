@class SBSABackgroundBlurDescription;

@interface SBSABackgroundBlurDescriptionMutator : NSObject

@property (readonly, nonatomic) SBSABackgroundBlurDescription *backgroundBlurDescription;
@property (nonatomic, getter=isBlurHidden) BOOL blurHidden;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } blurFrame;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBackgroundBlurDescription:(id)a0;

@end

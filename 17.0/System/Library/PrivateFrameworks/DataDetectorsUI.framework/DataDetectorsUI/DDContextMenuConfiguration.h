@class NSURL;

@interface DDContextMenuConfiguration : UIContextMenuConfiguration

@property (nonatomic) BOOL prefersActionMenuStyle;
@property (nonatomic) BOOL expandPreviewOnInteraction;
@property (copy, nonatomic) id /* block */ interactionViewControllerProvider;
@property (retain, nonatomic) NSURL *interactionURL;

- (void).cxx_destruct;
- (BOOL)performPreviewActionForMenuWithAnimator:(id)a0;

@end

@class NSString, UIViewController;

@interface HUViewControllerCollectionViewCell : UICollectionViewCell <HUViewControllerCell>

@property (weak, nonatomic) UIViewController *parentViewController;
@property (nonatomic) BOOL allowSelfSizing;
@property (nonatomic) BOOL useDefaultCellBackgroundColor;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)removeFromParentViewController;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)_removeFromParentViewControllerAndClearProperty:(BOOL)a0;
- (void)addToParentViewController:(id)a0;

@end

@class UIViewController, UIView;

@interface _TVStackCollectionViewCell : UICollectionViewCell {
    UIView *_cellContentView;
    long long _pressesEventDepth;
    UIView *_stowedContentView;
}

@property (weak, nonatomic) UIViewController *viewController;

- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (id)preferredFocusEnvironments;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)_pressesDidEnd;

@end

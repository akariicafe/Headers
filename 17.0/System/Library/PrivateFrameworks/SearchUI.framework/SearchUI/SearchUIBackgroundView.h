@class UIView;

@interface SearchUIBackgroundView : UIView

@property (retain) UIView *platterView;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;

- (void)tlk_updateForAppearance:(id)a0;
- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end

@interface TLKProminenceView : UIView

@property (nonatomic) unsigned long long prominence;
@property (nonatomic) double borderWidth;
@property (nonatomic) double customColorAlpha;

+ (id)viewWithProminence:(unsigned long long)a0;

- (void)tlk_updateForAppearance:(id)a0;
- (id)init;
- (id)initWithProminence:(unsigned long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)didMoveToWindow;

@end

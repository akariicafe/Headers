@class SFContactImage;

@interface SearchUIContactsThumbnailView : CNAvatarView

@property (retain, nonatomic) SFContactImage *contactImage;
@property (nonatomic) BOOL useCompactDisplay;
@property (nonatomic) BOOL forcePressViewIsEntireEnclosingCell;
@property (nonatomic) BOOL usesCompactWidth;

+ (id)avatarSettings;
+ (void)clearAvatarSettings;

- (void)tlk_updateForAppearance:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)init;
- (void)updateForcePressView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setContactImage:(id)a0 useCompactDisplay:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end

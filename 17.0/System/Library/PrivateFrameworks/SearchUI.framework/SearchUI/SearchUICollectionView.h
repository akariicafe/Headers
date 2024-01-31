@interface SearchUICollectionView : UICollectionView

- (void)tlk_updateForAppearance:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)didAddSubview:(id)a0;
- (void)applySeparatorAppearance:(id)a0 toSubviewIfNecessary:(id)a1;
- (void)didMoveToWindow;
- (id)focusGroupIdentifier;

@end

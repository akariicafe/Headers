@class SearchUIImage;

@interface SearchUIImageButton : UIButton

@property (retain, nonatomic) SearchUIImage *unselectedImage;
@property (retain, nonatomic) SearchUIImage *selectedImage;

- (void)tlk_updateForAppearance:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end

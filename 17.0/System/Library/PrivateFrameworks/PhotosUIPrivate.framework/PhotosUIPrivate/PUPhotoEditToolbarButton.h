@class UIColor, NSString, UIImageView, UILabel, PUPhotoEditViewControllerSpec;

@interface PUPhotoEditToolbarButton : PXUIButton

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *unselectedGlyphName;
@property (retain, nonatomic) NSString *selectedGlyphName;
@property (retain, nonatomic) UILabel *toolLabel;
@property (retain, nonatomic) UIImageView *selectionIndicator;
@property (nonatomic) BOOL usesHierarchicalColor;
@property (nonatomic) long long selectionIndicatorType;
@property (retain, nonatomic) PUPhotoEditViewControllerSpec *photoEditSpec;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL isTopToolbarButton;
@property (nonatomic) BOOL selectedGlyphHasHighlightColor;
@property (retain, nonatomic) UIColor *selectedColor;

+ (id)selectionIndicatorImageForType:(long long)a0;
+ (id)buttonForTool:(id)a0 showingLabel:(BOOL)a1 selectionIndicatorType:(long long)a2 spec:(id)a3;
+ (id)buttonWithImageNamed:(id)a0 selectedImageNamed:(id)a1 accessibilityLabel:(id)a2 spec:(id)a3;
+ (id)constraintsForSelectionIndicatorType:(long long)a0 buttonImageView:(id)a1 selectionIndicator:(id)a2;

- (void)updateConfiguration;
- (id)selectedConfiguration;
- (id)largeContentImage;
- (id)largeContentTitle;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)imageForState:(unsigned long long)a0;
- (id)baseConfiguration;
- (void)buttonTouchUpAction:(id)a0;
- (id)imageConfigurationForSelectedState:(BOOL)a0;
- (id)unselectedConfiguration;

@end

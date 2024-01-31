@class UIColor, UIFont;

@interface PBFPosterGalleryViewSpec : NSObject

@property (readonly, nonatomic) int deviceClass;
@property (readonly, nonatomic) struct CGSize { double width; double height; } portraitGallerySize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } landscapeGallerySize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceBounds;
@property (readonly, nonatomic) double referenceScale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } posterContentSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } posterHeroContentSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } posterEditingConfirmationContentSize;
@property (readonly, nonatomic) double posterCornerRadius;
@property (readonly, nonatomic) double sectionHorizontalMargin;
@property (readonly, nonatomic) double sectionVerticalMargin;
@property (readonly, nonatomic) double standardSpacing;
@property (readonly, nonatomic) double groupSpacing;
@property (readonly, nonatomic) UIFont *sectionHeaderTitleFont;
@property (readonly, nonatomic) UIColor *sectionHeaderTitleColor;
@property (readonly, nonatomic) UIFont *sectionHeaderSubtitleFont;
@property (readonly, nonatomic) UIColor *sectionHeaderSubtitleColor;
@property (readonly, nonatomic) double sectionHeaderSubtitleTopMargin;
@property (readonly, nonatomic) double sectionHeaderTopSpacing;
@property (readonly, nonatomic) double sectionHeaderBottomSpacing;
@property (readonly, nonatomic) UIFont *previewCellLabelFont;
@property (readonly, nonatomic) UIColor *previewCellLabelColor;
@property (readonly, nonatomic) double previewCellLabelToImageVerticalSpacing;
@property (readonly, nonatomic) UIFont *previewCellDescriptionLabelFont;
@property (readonly, nonatomic) UIColor *previewCellDescriptionLabelColor;
@property (readonly, nonatomic) double previewSmartAlbumCellAdditionalTopMargin;

+ (id)specForScreen:(id)a0;
+ (id)specForScreenIdentity:(id)a0;
+ (id)specForDisplayContext:(id)a0;
+ (id)displayMonitor;

- (struct CGSize { double x0; double x1; })posterContentSizeForOrientation:(long long)a0;
- (id)initWithReferenceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 deviceClass:(int)a1 displayCornerRadius:(double)a2 scale:(double)a3;
- (double)heroSpacingForOrientation:(long long)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })gallerySizeForPadOrientation:(long long)a0;

@end

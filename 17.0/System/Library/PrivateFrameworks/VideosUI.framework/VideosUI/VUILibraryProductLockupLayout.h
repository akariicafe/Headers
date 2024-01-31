@class NSString, VUIMediaEntityType, VUITextLayout;

@interface VUILibraryProductLockupLayout : NSObject <VUILibraryProductLockupViewLayout>

@property (retain, nonatomic) VUITextLayout *playLabelTextLayout;
@property (retain, nonatomic) VUITextLayout *subtitleTextLayout;
@property (retain, nonatomic) VUITextLayout *descriptionTextLayout;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) VUIMediaEntityType *entityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)buttonModuleTopMarginForWindowWidth:(double)a0;
- (void)configLayout;
- (double)contentDescriptionBottomMarginForWindowWidth:(double)a0;
- (id)contentDescriptionFontForSizeClass:(long long)a0;
- (int)contentDescriptionNumberOfLinesForTraitCollection:(id)a0;
- (double)contentDescriptionTopMarginForWindowWidth:(double)a0;
- (double)coverArtBottomPadding;
- (double)coverArtImageRightMarginForWindowWidth:(double)a0;
- (struct CGSize { double x0; double x1; })coverArtImageSize;
- (id)descriptionTextLayoutForTraitCollection:(id)a0 isExpanded:(BOOL)a1;
- (long long)downloadButtonPosition;
- (id)initWithLayoutType:(long long)a0 entityType:(id)a1;
- (long long)layoutTypeForWindowWidth:(double)a0;
- (double)metadataTopMargin;
- (id)subtitleTextLayoutForWindowWidth:(double)a0;
- (double)subtitleTopMarginForWindowWidth:(double)a0;
- (double)titleTopMargin;

@end

@class VUIDownloadButton, NSString, VUILabel, UIImageView, VUIDownloadEntity;
@protocol VUIDownloadCollectionViewCellDelegate;

@interface VUIDownloadCollectionViewCell : VUILibraryLockupViewCell <VUIDownloadEntityDelegate, VUIRentalExpirationLabelDelegate>

@property (retain, nonatomic) VUILabel *metaDataHeaderFirstLabel;
@property (retain, nonatomic) VUILabel *metaDataHeaderSecondLabel;
@property (retain, nonatomic) VUILabel *dotSeparatorLabel;
@property (retain, nonatomic) UIImageView *editImageView;
@property (retain, nonatomic) VUIDownloadEntity *downloadEntity;
@property (nonatomic) unsigned long long previousDownloadState;
@property (retain, nonatomic) VUIDownloadButton *downloadButton;
@property (weak, nonatomic) id<VUIDownloadCollectionViewCellDelegate> delegate;
@property (nonatomic) BOOL editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_generateMetaDataHeaderFirstLabelForDownloadEntity:(id)a0;
+ (void)_movieConfigurationForVUIDownloadEntityCollectionViewCell:(id)a0 withDownloadEntity:(id)a1;
+ (void)_showConfigurationForVUIDownloadEntityCollectionViewCell:(id)a0 withDownloadEntity:(id)a1;
+ (void)configureVUIDownloadEntityCollectionViewCell:(id)a0 withDownloadEntity:(id)a1 width:(double)a2 forMetrics:(BOOL)a3;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_addDownloadButtonIfRequired:(id)a0;
- (void)_addMetaDataLabelsIfRequired:(id)a0;
- (void)_configureViewElementsForAX;
- (BOOL)_hasSecondaryLabel;
- (struct CGSize { double x0; double x1; })_layoutForAccessibility:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_layoutForCompact:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_layoutWithSize:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (void)_updateViewForEditState;
- (void)downloadEntity:(id)a0 numberOfItemsDidChange:(unsigned long long)a1;
- (void)downloadEntity:(id)a0 numberOfItemsDownloadingDidChange:(id)a1;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;

@end

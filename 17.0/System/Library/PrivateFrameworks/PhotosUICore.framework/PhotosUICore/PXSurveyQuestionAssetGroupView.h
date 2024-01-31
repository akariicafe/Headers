@class UIView, NSNumber, NSString, NSDateFormatter, PHAssetCollection, NSObject, CAGradientLayer, NSMutableSet, UILabel, NSMutableArray;
@protocol OS_dispatch_queue, PXSurveyQuestionAssetGroupViewDelegate;

@interface PXSurveyQuestionAssetGroupView : UIView {
    double _imagePadding;
    NSDateFormatter *_dateFormatter;
}

@property (retain, nonatomic) NSMutableSet *presentedAssetIds;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (retain, nonatomic) NSMutableArray *imageViews;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageViewsQueue;
@property (retain, nonatomic) UIView *metadataView;
@property (retain, nonatomic) CAGradientLayer *metadataViewGradient;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UILabel *dateRangeLabel;
@property (retain, nonatomic) NSNumber *customMaximumPreviewAssetCount;
@property (retain, nonatomic) NSString *keyAssetLocalIdentifier;
@property (weak, nonatomic) id<PXSurveyQuestionAssetGroupViewDelegate> delegate;

- (void)_setupViews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0;
- (id)_arrangeAssetsForDisplay:(id)a0;
- (void)_beginImageFetchFromCollection;
- (unsigned char)_getTotalViews;
- (void)_handleViewTap;
- (id)_imageViewForPosition:(unsigned char)a0 totalViewCount:(unsigned char)a1;
- (void)_loadAndApplyImagesFromAssets:(id)a0;
- (void)_setupMetadataView;
- (unsigned char)getHorizontalViewCountForTotalNumberOfViews:(unsigned char)a0;
- (unsigned char)getVerticalViewCountForTotalNumberOfViews:(unsigned char)a0;
- (id)initWithAssetCollection:(id)a0 customMaximumPreviewAssetCount:(id)a1 keyAssetLocalIdentifier:(id)a2;
- (double)minXPositionForViewPosition:(unsigned char)a0 totalNumberOfViews:(unsigned char)a1;
- (double)minYPositionForViewPosition:(unsigned char)a0 totalNumberOfViews:(unsigned char)a1;
- (void)setFrameForSubview:(id)a0 inPosition:(unsigned char)a1;
- (id)validCustomMaximumPreviewAssetCountForCustomMaximumPreviewAssetCount:(id)a0;

@end

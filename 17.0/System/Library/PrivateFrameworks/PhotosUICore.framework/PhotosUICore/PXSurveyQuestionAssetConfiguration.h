@class NSString, UIImage, UIView, PXSurveyQuestionConfigurationHandlers, PXDisplayAssetContentView;
@protocol PXDisplayAsset;

@interface PXSurveyQuestionAssetConfiguration : NSObject <PXSurveyQuestionConfiguration> {
    PXDisplayAssetContentView *_assetView;
}

@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } assetContentsRect;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIImage *contentImageForOneUp;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRectForOneUp;
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers;
@property (nonatomic) BOOL isStale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureViewForAsset:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleDidSelectAssetView;
- (id)initWithTitle:(id)a0 asset:(id)a1;
- (void)layoutContentViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)needsQuestionInvalidationForChange:(id)a0;

@end

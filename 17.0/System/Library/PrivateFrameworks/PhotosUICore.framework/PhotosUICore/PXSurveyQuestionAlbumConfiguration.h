@class UIView, NSString, UIImage, PHAsset, PXTitleSubtitleUILabel, PHAssetCollection, PXDisplayAssetContentView, PXSurveyQuestionConfigurationHandlers;

@interface PXSurveyQuestionAlbumConfiguration : NSObject <PXSurveyQuestionConfiguration> {
    PXDisplayAssetContentView *_contentView;
    PXTitleSubtitleUILabel *_label;
}

@property (readonly, nonatomic) PHAssetCollection *album;
@property (readonly, nonatomic) PHAsset *keyAsset;
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

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_getTitleSubtitleLabelSpec;
- (void)_handleDidSelectAlbumView;
- (id)initWithTitle:(id)a0 album:(id)a1;
- (void)layoutContentViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)needsDisplayRefreshForChange:(id)a0;
- (BOOL)needsQuestionInvalidationForChange:(id)a0;

@end

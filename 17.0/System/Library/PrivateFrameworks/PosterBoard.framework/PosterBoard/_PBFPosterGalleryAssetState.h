@class PBFPosterSnapshotCollection, _PBFImageView, PRPosterDescriptorGalleryOptions, PBFPosterGalleryAsset, PBFGalleryPosterViewController;
@protocol PBFPosterPreview;

@interface _PBFPosterGalleryAssetState : NSObject {
    BOOL _galleryOptionsDidFail;
    PRPosterDescriptorGalleryOptions *_galleryOptions;
}

@property (readonly, nonatomic) id<PBFPosterPreview> preview;
@property (nonatomic, setter=setVisible:) BOOL isVisible;
@property (nonatomic) BOOL shouldPrefetch;
@property (readonly, nonatomic) BOOL isLiveAlwaysPoster;
@property (readonly, nonatomic) BOOL willUseLivePreview;
@property (nonatomic) long long livePreviewState;
@property (retain, nonatomic) PBFGalleryPosterViewController *livePreviewViewController;
@property (retain, nonatomic) _PBFImageView *previewImageView;
@property (readonly, nonatomic) PBFPosterGalleryAsset *asset;
@property (readonly, nonatomic) PBFPosterSnapshotCollection *snapshotCollection;
@property (readonly, nonatomic) PRPosterDescriptorGalleryOptions *galleryOptions;

+ (id)liveAlwaysPostersPredicate;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithPreview:(id)a0;

@end

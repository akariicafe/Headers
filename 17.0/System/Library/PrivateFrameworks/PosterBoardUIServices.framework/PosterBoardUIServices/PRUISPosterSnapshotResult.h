@class PRPosterSnapshotBundle, UIImage, PRSPosterPath, PRPosterSnapshotterResult;
@protocol BSInvalidatable;

@interface PRUISPosterSnapshotResult : NSObject {
    id<BSInvalidatable> _pathValidityExtension;
    PRPosterSnapshotterResult *_snapshotterResult;
}

@property (retain, nonatomic) PRPosterSnapshotBundle *snapshotBundle;
@property (retain, nonatomic) UIImage *floatingLayerImage;
@property (retain, nonatomic) UIImage *foregroundLayerImage;
@property (retain, nonatomic) UIImage *backgroundLayerImage;
@property (retain, nonatomic) UIImage *compositeLayerImage;
@property (nonatomic) double executionTime;
@property (retain, nonatomic) PRSPosterPath<BSInvalidatable> *snapshotBundlePath;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSnapshotBundle:(id)a0;
- (id)initWithSnapshotterResult:(id)a0;

@end

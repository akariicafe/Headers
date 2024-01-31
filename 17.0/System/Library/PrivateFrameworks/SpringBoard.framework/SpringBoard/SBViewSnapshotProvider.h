@class SBWindowScene, UIView;

@interface SBViewSnapshotProvider : NSObject {
    UIView *_view;
    long long _orientation;
}

@property (readonly, weak, nonatomic) SBWindowScene *windowScene;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) double delay;
@property (nonatomic) BOOL includeWindowSceneWallpaper;

- (id)snapshot;
- (void).cxx_destruct;
- (id)_createSnapshotOfWallpaperAndWindow:(id)a0;
- (id)initWithWindowScene:(id)a0 view:(id)a1 orientation:(long long)a2;
- (void)snapshotAsynchronously:(BOOL)a0 withImageBlock:(id /* block */)a1;
- (void)snapshotWithImageBlock:(id /* block */)a0;

@end

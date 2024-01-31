@class _UILegibilitySettings, NSString, UIImageView, PBUIReplicaDebugView;
@protocol PBUIFakeBlurObserver, PBUIPosterReplicaSnapshotProviding, BSInvalidatable, PBUIReplicaSnapshotSource;

@interface PBUISnapshotReplicaView : UIView <PBUIPosterReplicaView, PBUIFakeBluring, PBUIWallpaperPositioning> {
    id<BSInvalidatable> _providerToken;
    id<BSInvalidatable> _sourceToken;
    UIImageView *_imageView;
    _UILegibilitySettings *_legibilitySettings;
    BOOL _invalidated;
}

@property (nonatomic, getter=isSubscribed) BOOL subscribed;
@property (nonatomic) long long effectiveStyle;
@property (weak, nonatomic) id<PBUIPosterReplicaSnapshotProviding> provider;
@property (readonly, nonatomic) id<PBUIReplicaSnapshotSource> source;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) PBUIReplicaDebugView *debugView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PBUIFakeBlurObserver> observer;
@property (nonatomic) double zoomScale;
@property (nonatomic) unsigned long long transformOptions;
@property (nonatomic) BOOL shouldMatchWallpaperPosition;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;

+ (BOOL)automaticallyNotifiesObserversForValid;

- (void)willMoveToSuperview:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)invalidate;
- (void)offsetWallpaperBy:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)requestStyle:(long long)a0;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_updateImageViewRotation;
- (void)setNeedsProviderUpdate;
- (void)setNeedsSourceUpdate;

@end

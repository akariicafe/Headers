@class NSString, _UIBackdropView, MTMaterialView;
@protocol PBUIFakeBlurObserver;

@interface PBUIPortalReplicaEffectView : PBUIPortalReplicaView <PBUIFakeBluring> {
    _UIBackdropView *_effectView;
    MTMaterialView *_materialView;
    long long _style;
}

@property (nonatomic) double effectWeight;
@property (weak, nonatomic) id<PBUIFakeBlurObserver> observer;
@property (nonatomic) double zoomScale;
@property (nonatomic) unsigned long long transformOptions;
@property (nonatomic) BOOL shouldMatchWallpaperPosition;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)effectiveStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)offsetWallpaperBy:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)requestStyle:(long long)a0;
- (BOOL)isEffectView;
- (void)setNeedsSourceUpdate;

@end

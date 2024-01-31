@class NSString;
@protocol VKStickerEffectInternal;

@interface _VKStickerEffectViewInternal : UIView <VKStickerEffectViewInternal> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ instanceLabel;
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ commandQueue;
    void /* unknown type, empty encoding */ metalLayer;
    void /* unknown type, empty encoding */ metalLayerContainer;
    void /* unknown type, empty encoding */ needsRender;
    void /* unknown type, empty encoding */ renderInProgress;
    void /* unknown type, empty encoding */ scrollViewToObserveCount;
    void /* unknown type, empty encoding */ scrollViewToObserve;
    void /* unknown type, empty encoding */ requiredScale;
    void /* unknown type, empty encoding */ appliedScale;
    void /* unknown type, empty encoding */ strokeScale;
    void /* unknown type, empty encoding */ renderQueue;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ instanceNumber;
    void /* unknown type, empty encoding */ displayLinkActive;
    void /* unknown type, empty encoding */ motionActive;
    void /* unknown type, empty encoding */ deviceOrientation;
    void /* unknown type, empty encoding */ settlingDuration1;
    void /* unknown type, empty encoding */ settlingDuration2;
    void /* unknown type, empty encoding */ settlingStartAngle;
    void /* unknown type, empty encoding */ settlingEndAngle;
    void /* unknown type, empty encoding */ settlingStartTime;
    void /* unknown type, empty encoding */ settlingOrientation;
    void /* unknown type, empty encoding */ screenCenterDuration;
    void /* unknown type, empty encoding */ unitScreenCenter;
}

@property (nonatomic) void /* unknown type, empty encoding */ boundsIncludeStroke;
@property (nonatomic) void /* unknown type, empty encoding */ reRenderOnMotion;
@property (nonatomic) void /* unknown type, empty encoding */ curlPosition;
@property (nonatomic, retain) void /* unknown type, empty encoding */ effect;
@property (nonatomic, retain) id<VKStickerEffectInternal> _effect;
@property (nonatomic, retain) void /* unknown type, empty encoding */ image;
@property (nonatomic) void /* unknown type, empty encoding */ isPaused;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

+ (double)extraScaleToIncludeStrokeWithEffectType:(long long)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)resetRestingOrientation;

- (void)_observeScrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)scrollViewWillChange:(id)a0;
- (void)scrollViewDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)playSettlingAnimation;
- (void)snapshotWithCompletionHandler:(id /* block */)a0;
- (void)_internalUpdateFromDisplayLink:(id)a0;

@end

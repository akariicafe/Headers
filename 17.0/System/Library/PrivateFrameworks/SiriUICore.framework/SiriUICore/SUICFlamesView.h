@class UIColor, NSString, UIImage, UIView;
@protocol SUICFlamesViewDelegate, SUICFlamesViewProviding;

@interface SUICFlamesView : UIView <SUICFlamesViewProvidingDelegate> {
    UIView<SUICFlamesViewProviding> *_flamesView;
}

@property (readonly, nonatomic) BOOL isRenderingEnabled;
@property (weak, nonatomic) id<SUICFlamesViewDelegate> flamesDelegate;
@property (nonatomic) long long mode;
@property (nonatomic) long long state;
@property (nonatomic) BOOL showAura;
@property (nonatomic) BOOL freezesAura;
@property (nonatomic) BOOL reduceFrameRate;
@property (nonatomic) BOOL reduceThinkingFramerate;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } activeFrame;
@property (retain, nonatomic) UIImage *overlayImage;
@property (retain, nonatomic) UIColor *dictationColor;
@property (nonatomic) BOOL renderInBackground;
@property (nonatomic) BOOL paused;
@property (nonatomic) double horizontalScaleFactor;
@property (nonatomic) BOOL accelerateTransitions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isMetalAvailable;

- (void)resetAndReinitialize:(BOOL)a0;
- (void)fadeOutCurrentAura;
- (void)didMoveToSuperview;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screen:(id)a1 fidelity:(long long)a2;
- (void).cxx_destruct;
- (void)prewarmShadersForCurrentMode;
- (void)setDelegate:(id)a0;
- (void)layoutSubviews;
- (void)setRenderingEnabled:(BOOL)a0 forReason:(id)a1;
- (float)audioLevelForFlamesView:(id)a0;
- (void)flamesViewAuraDidDisplay:(id)a0;
- (void)resetAndReinitializeMetal:(BOOL)a0;

@end

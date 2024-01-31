@class _PUOneUpCropUIButton, UIVisualEffectView, NSString;
@protocol PUOneUpCropButtonDelegate;

@interface PUOneUpCropButton : UIView <UIPointerInteractionDelegate, _PUOneUpCropUIButtonDelegate>

@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) _PUOneUpCropUIButton *button;
@property (nonatomic) unsigned long long cachedDefaultAspectRatio;
@property (nonatomic) BOOL loadedDefaultAspectRatio;
@property (nonatomic) BOOL presentingMenu;
@property (nonatomic) BOOL targeted;
@property (weak, nonatomic) id<PUOneUpCropButtonDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL isBeingTouched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })_size;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForWindow:(id)a0;

- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (id)init;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)largeContentTitle;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)layoutSubviews;
- (id)_backgroundEffectsWithBrightness:(double)a0;
- (id)_createButton;
- (BOOL)_portrait;
- (struct CGSize { double x0; double x1; })_aspectRatioSizeForAspectRatio:(unsigned long long)a0;
- (id)_actionForAspectRatio:(unsigned long long)a0;
- (id)_aspectRatioMenu;
- (id)_aspectRatioMenuActions;
- (unsigned long long)_defaultAspectRatio;
- (void)_didTapButton:(id)a0;
- (id)_identifierForAspectRatio:(unsigned long long)a0;
- (void)_setDefaultAspectRatio:(unsigned long long)a0;
- (void)oneUpCropUIButton:(id)a0 menuPresentedDidChange:(BOOL)a1;
- (void)presentMenu;

@end

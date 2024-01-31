@class PKAccessoryDevice, PKPass, UIColor, NSObject, UIView, UILabel, PKGlyphView;
@protocol PKAccessoryDeviceViewDelegate, OS_dispatch_source;

@interface PKAccessoryDeviceView : UIView {
    PKGlyphView *_glyph;
    UIView *_imageBackgroundView;
    UILabel *_label;
    PKAccessoryDevice *_accessory;
    PKPass *_pass;
    UIView *_parentView;
    UIColor *_strokeColor;
    UIColor *_backgroundColor;
    double _animationDelay;
    long long _state;
    NSObject<OS_dispatch_source> *_timeOutBlockTimer;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cutoutFrame;
@property (weak, nonatomic) id<PKAccessoryDeviceViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutFailureState;
- (void)_layoutProcessingState;
- (void)_layoutSuccessState;
- (void)_layoutSuccessWithUserInterventionState;
- (void)_layoutTryAgainState;
- (void)_setColors;
- (void)_showWalletWithMessage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_springBoardCutoutRect;
- (void)changeToState:(long long)a0;
- (void)dismissViewImmediatelyWithCompletion:(id /* block */)a0;
- (void)dismissViewWithCompletion:(id /* block */)a0;
- (id)initWithPass:(id)a0 accessory:(id)a1 cutoutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 parentView:(id)a3;
- (id)initWithState:(long long)a0 accessory:(id)a1 cutoutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 parentView:(id)a3;
- (void)presentOnParentView;

@end

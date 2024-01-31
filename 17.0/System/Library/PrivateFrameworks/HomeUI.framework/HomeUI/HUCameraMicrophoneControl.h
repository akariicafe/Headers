@class UIButton, HUIconView;

@interface HUCameraMicrophoneControl : UIControl

@property (retain, nonatomic) UIButton *talkButton;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) HUIconView *doneButtonIconView;
@property (nonatomic, getter=isTalking) BOOL talking;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end

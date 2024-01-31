@class _UISlotView, _UICalloutBarVisualStyle, NSDate, UITextReplacement;

@interface UICalloutBarButton : UIButton {
    int m_position;
    BOOL m_isText;
    BOOL m_single;
    BOOL m_padLeft;
    BOOL m_padRight;
    NSDate *m_appearanceDate;
    _UISlotView *m_securePasteButtonSlotView;
}

@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) double contentWidth;
@property (readonly, nonatomic) double contentScale;
@property (readonly, nonatomic) double additionalContentHeight;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) BOOL isSecurePasteButton;
@property (retain, nonatomic) _UICalloutBarVisualStyle *visualStyle;
@property (nonatomic) BOOL forceFlash;
@property (nonatomic) long long page;
@property (nonatomic) double dividerOffset;
@property (nonatomic) double imageVerticalAdjust;
@property (nonatomic) BOOL dontDismiss;
@property (retain, nonatomic) UITextReplacement *textReplacement;

+ (Class)_visualProviderClass;
+ (id)buttonWithImage:(id)a0 action:(SEL)a1 type:(int)a2 inView:(id)a3 visualStyle:(id)a4;
+ (id)buttonWithTitle:(id)a0 action:(SEL)a1 type:(int)a2 inView:(id)a3 visualStyle:(id)a4;
+ (id)buttonWithTitle:(id)a0 image:(id)a1 action:(SEL)a2 type:(int)a3 inView:(id)a4 visualStyle:(id)a5;
+ (id)buttonWithTitle:(id)a0 subtitle:(id)a1 maxWidth:(double)a2 action:(SEL)a3 type:(int)a4 inView:(id)a5 visualStyle:(id)a6;
+ (id)symbolConfigurationForScale:(double)a0;

- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)dealloc;
- (void)setHighlighted:(BOOL)a0;
- (void)setContentScale:(double)a0;
- (void)removeFromSuperview;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (double)cornerRadius;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)flash:(id)a0 forEvent:(id)a1;
- (void)_commonSetupWithAction:(SEL)a0 type:(int)a1 visualStyle:(id)a2;
- (double)_scaleFactorForImage;
- (unsigned int)_secureName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustRectForPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)buttonHorizontalPadding;
- (void)cancelFlash;
- (void)configureForLeftPosition:(int)a0;
- (void)configureForMiddlePosition;
- (void)configureForRightPosition:(int)a0;
- (void)configureForSingle:(int)a0;
- (void)configureForVerticalPosition:(int)a0;
- (void)configureSecurePasteButtonWithWidth:(double)a0 height:(double)a1;
- (void)fadeAndSendActionWithAuthenticationMessage:(id)a0;
- (void)setupWithImage:(id)a0 action:(SEL)a1 type:(int)a2 visualStyle:(id)a3;
- (void)setupWithTitle:(id)a0 action:(SEL)a1 type:(int)a2 visualStyle:(id)a3;
- (void)setupWithTitle:(id)a0 image:(id)a1 action:(SEL)a2 type:(int)a3 visualStyle:(id)a4;
- (void)setupWithTitle:(id)a0 subtitle:(id)a1 maxWidth:(double)a2 action:(SEL)a3 type:(int)a4 visualStyle:(id)a5;
- (void)touchDown;

@end

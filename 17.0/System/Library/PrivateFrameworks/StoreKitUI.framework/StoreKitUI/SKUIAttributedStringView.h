@class UIColor, NSArray, NSString, NSTextContainer, SKUIAttributedStringLayout, NSLayoutManager, NSTextStorage;
@protocol SKUILinkHandler;

@interface SKUIAttributedStringView : UIView <SKUIReusableView> {
    double _calculatedTopInset;
    NSLayoutManager *_layoutManager;
    BOOL _touchInside;
    struct _NSRange { unsigned long long location; unsigned long long length; } _trackingRange;
    BOOL _trackingTouch;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _textBounds;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
}

@property (readonly, nonatomic) double baselineOffset;
@property (readonly, nonatomic) double firstBaselineOffset;
@property (nonatomic) long long firstLineTopInset;
@property (retain, nonatomic) SKUIAttributedStringLayout *layout;
@property (copy, nonatomic) NSArray *requiredBadges;
@property (nonatomic) long long badgePlacement;
@property (nonatomic) long long stringTreatment;
@property (retain, nonatomic) UIColor *treatmentColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL textColorFollowsTintColor;
@property (readonly, nonatomic) BOOL usesTallCharacterSet;
@property (nonatomic) BOOL containsLinks;
@property (weak, nonatomic) id<SKUILinkHandler> linkDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithLayout:(id)a0 treatment:(long long)a1;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_reloadTopInset;
- (void)viewWasRecycled;
- (void)_setTouchInside:(BOOL)a0;
- (void)_setTrackingTouch:(BOOL)a0;
- (void)_setupTapLocatorContainer;
- (BOOL)_touchInsideLinkText:(struct CGPoint { double x0; double x1; })a0 linkTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;

@end

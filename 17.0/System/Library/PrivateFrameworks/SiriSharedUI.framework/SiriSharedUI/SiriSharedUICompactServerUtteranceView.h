@class SiriSharedUIDeviceMotionEffectView, NSMapTable, UIView, NSMutableArray;
@protocol SiriSharedUICompactServerUtteranceViewDelegate;

@interface SiriSharedUICompactServerUtteranceView : SiriSharedUIStandardView {
    NSMutableArray *_serverLabels;
    NSMapTable *_emojiLabels;
    BOOL _isMultiLine;
}

@property (readonly, nonatomic) SiriSharedUIDeviceMotionEffectView *deviceMotionEffectView;
@property (readonly, nonatomic) UIView *labelsContainerView;
@property (weak, nonatomic) id<SiriSharedUICompactServerUtteranceViewDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL isInAmbient;
@property (nonatomic) BOOL isInAmbientInteractivity;

- (void)dealloc;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isMultiLine;
- (id)_createLabel;
- (void)setUtterances:(id)a0;
- (id)initWithContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 delegate:(id)a1;
- (id)_createEmojiLabelForString:(id)a0 containingEmojisAtRanges:(id)a1;
- (id)_createLabelForUtterance:(id)a0;
- (id)_fontForUtteranceLabel;
- (double)_lineHeightForFont:(id)a0;
- (double)_scaledSpacingBetweenLabels;
- (void)_setTextForLabel:(id)a0 text:(id)a1;
- (id)_textForLabel:(id)a0;

@end

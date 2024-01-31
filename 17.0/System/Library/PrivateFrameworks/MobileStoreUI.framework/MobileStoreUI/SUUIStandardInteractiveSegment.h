@class CAMediaTimingFunction, NSString, UIImageView, UIImage, UIView, NSAttributedString, UILabel;

@interface SUUIStandardInteractiveSegment : UIControl <SUUIInteractiveSegmenting> {
    UIView *_borderAndBackgroundContainerView;
    UIImage *_backgroundImage;
    UIImage *_borderImage;
    UIImageView *_borderImageView;
    BOOL _hasDirtyTitleLabelSize;
    BOOL _hasSetRelativeSelectionProgress;
    BOOL _hasValidCorneredImages;
    UIImageView *_highlightedBackgroundImageView;
    long long _highlightTransactionCount;
    CAMediaTimingFunction *_inverseProgressTimingFunction;
    UIImageView *_selectedBackgroundImageView;
    CAMediaTimingFunction *_progressTimingFunction;
    double _relativeSelectionProgress;
    long long _segmentPosition;
    UILabel *_titleLabel;
    NSAttributedString *_titleLabelAttributedString;
    struct CGSize { double width; double height; } _titleLabelSize;
}

@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) double relativeSelectionProgress;
@property (nonatomic) long long segmentPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultHeight;

- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_backgroundImage;
- (id)_borderImage;
- (struct CGSize { double x0; double x1; })_titleLabelSize;
- (void)_applySelectionProgress;
- (unsigned long long)_cornersForSegmentPosition:(long long)a0;
- (id)_createCorneredImageWithScale:(double)a0 forBorder:(BOOL)a1;
- (id)_inverseProgressTimingFunction;
- (double)_normalizedSelectionProgressForRelativeSelectionProgress:(double)a0;
- (id)_progressTimingFunction;
- (void)_reloadCorneredImages;
- (void)_setNeedsReloadCorneredImages;
- (void)_updateBorderAndBackgroundContainerViewTinting;

@end

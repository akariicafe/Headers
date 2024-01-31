@class UIView, UIFont, PKApplicationMessageContent, UIImageView, UIButton, PKApplicationMessageContentView_State, NSMutableArray, CAFilter, UILabel;
@protocol PKApplicationMessageContentViewDelegate;

@interface PKApplicationMessageContentView : UIView {
    CAFilter *_blurFilter;
    double _filterRadius;
    UIButton *_dismiss;
    UIView *_contentView;
    struct { double fadeInDelay; struct { struct UIEdgeInsets { double top; double left; double bottom; double right; } margins; } previousLayoutState; } _animationState;
    UIView *_iconContainer;
    UIImageView *_icon;
    UILabel *_title;
    UILabel *_body;
    struct { struct UIEdgeInsets { double top; double left; double bottom; double right; } margins; } _layoutState;
    PKApplicationMessageContentView_State *_state;
    NSMutableArray *_snapshots;
    UIFont *_significantFont;
    UIFont *_fixedSignificantFont;
    UIFont *_regularFont;
    BOOL _deferringUpdate;
    BOOL _deferredSubviewUpdate;
    BOOL _dismissable;
    PKApplicationMessageContent *_content;
    id<PKApplicationMessageContentViewDelegate> _delegate;
}

- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end

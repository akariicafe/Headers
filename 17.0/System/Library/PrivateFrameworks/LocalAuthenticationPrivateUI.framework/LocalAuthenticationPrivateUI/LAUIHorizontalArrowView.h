@class UIColor, NSString, UIImageView, NSObject, UIView, UILabel, CALayer;
@protocol OS_dispatch_source;

@interface LAUIHorizontalArrowView : UIView {
    UIColor *_color;
    BOOL _effective_animating;
    unsigned short _dismissal_animation_count;
    BOOL _animated;
    double _resting_height;
    UIView *_container;
    UIView *_arrow_container;
    UIImageView *_head;
    UIView *_tail_container;
    UIImageView *_tail;
    UILabel *_label;
    BOOL _pulsing;
    struct periodic_animation_state { BOOL enabled; NSString *_key; CALayer *_layer; NSObject<OS_dispatch_source> *_removal_timer; } _head_pulse;
    struct periodic_animation_state { BOOL enabled; NSString *_key; CALayer *_layer; NSObject<OS_dispatch_source> *_removal_timer; } _tail_container_pulse;
    struct periodic_animation_state { BOOL enabled; NSString *_key; CALayer *_layer; NSObject<OS_dispatch_source> *_removal_timer; } _tail_counter_pulse;
}

@property (nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) long long direction;
@property (nonatomic) double displacement;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) struct CGSize { double width; double height; } maximumLineSize;

- (void)dealloc;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id).cxx_construct;
- (void)_updateFont;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutIfNeededAnimated:(BOOL)a0;
- (void)_updateAnimatingAnimated:(BOOL)a0;
- (void)_updateDirectionTransform;
- (void)_updateLabelSize;
- (void)_updatePulsingWithDelay:(double)a0;
- (void)_updateViewsWithColor;
- (void)boldTextStatusDidChange:(id)a0;

@end

@class UIVisualEffectView, UIView;
@protocol MUPlatterViewStyleProviding;

@interface MUPlatterView : UIView {
    UIVisualEffectView *_visualEffectView;
    id<MUPlatterViewStyleProviding> _visualStyleProvider;
}

@property (readonly, nonatomic) UIView *contentView;

- (id)initWithContentView:(id)a0;
- (id)init;
- (void)_setup;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)_createVisualStyleProvider;
- (void)_fetchGroupNameIfNeeded;

@end

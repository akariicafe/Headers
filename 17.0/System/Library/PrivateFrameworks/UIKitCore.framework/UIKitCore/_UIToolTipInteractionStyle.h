@class UIView;
@protocol UIToolTipProvider;

@interface _UIToolTipInteractionStyle : NSObject <_UIVisualStyleProviding>

@property (readonly, weak, nonatomic) UIView *view;
@property (readonly, weak, nonatomic) id<UIToolTipProvider> provider;

- (void).cxx_destruct;
- (id)initWithView:(id)a0 provider:(id)a1;
- (void)providerDidUpdate;

@end

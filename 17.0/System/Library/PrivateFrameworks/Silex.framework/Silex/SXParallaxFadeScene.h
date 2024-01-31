@class UIColor;

@interface SXParallaxFadeScene : SXComponentAnimation

@property (readonly, nonatomic) UIColor *fadeColor;

- (Class)handlerClass;
- (BOOL)userControllable;

@end

@interface TVRPresentationController : UIPresentationController

- (BOOL)shouldPresentInFullscreen;
- (BOOL)_shouldRespectDefinesPresentationContext;

@end

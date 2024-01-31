@interface PUSlideshowViewControllerSpecChange : PUViewControllerSpecChange

@property (nonatomic, setter=_setShouldShowPlaceholderChanged:) BOOL shouldShowPlaceholderChanged;
@property (nonatomic, setter=_setShouldShowChromeBarsChanged:) BOOL shouldShowChromeBarsChanged;
@property (nonatomic, setter=_setShouldObserveAirplayRouteChanged:) BOOL shouldObserveAirplayRouteChanged;
@property (nonatomic, setter=_setShouldShowAirplayButtonChanged:) BOOL shouldShowAirplayButtonChanged;
@property (readonly, nonatomic) BOOL chromeVisibilityChanged;

- (BOOL)changed;

@end

@class NSPointerArray, UIViewController;
@protocol PHAirPlayControllerContentProvider;

@interface PUAirPlayContentRegistry : NSObject

@property (retain, nonatomic, setter=_setContentProviders:) NSPointerArray *_contentProviders;
@property (retain, nonatomic, setter=_setCachedCurrentContent:) UIViewController *_cachedCurrentContent;
@property (nonatomic, setter=_setCurrentContentProvider:) id<PHAirPlayControllerContentProvider> currentContentProvider;

- (id)init;
- (id)contentForController:(id)a0;
- (void)clearContent;
- (void)addContentProvider:(id)a0;
- (void)_invalidateCurrentContent;
- (void).cxx_destruct;
- (unsigned long long)_indexOfContentProvider:(id)a0;
- (void)_updateCurrentContentProvider;
- (void)removeContentProvider:(id)a0;

@end

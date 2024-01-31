@class WebGeolocationPrivate;

@interface WebGeolocation : NSObject {
    WebGeolocationPrivate *_private;
}

- (void)dealloc;
- (void)setIsAllowed:(BOOL)a0;
- (id)_initWithWebCoreGeolocation:(void *)a0;

@end

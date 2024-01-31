@class QOSConfigInternal;

@interface QOSConfig : NSObject

@property (readonly) QOSConfigInternal *underlyingObject;

- (id)locale;
- (void).cxx_destruct;
- (long long)appTarget;
- (id)initWithAppTarget:(long long)a0 locale:(id)a1;

@end

@class UIScreen;

@interface _UIScreenBoundingPathUtilities : NSObject

@property (weak, nonatomic, getter=_screen) UIScreen *screen;

+ (id)boundingPathUtilitiesForScreen:(id)a0;

- (id)initWithScreen:(id)a0;
- (void).cxx_destruct;
- (id)boundingPathForWindow:(id)a0;

@end

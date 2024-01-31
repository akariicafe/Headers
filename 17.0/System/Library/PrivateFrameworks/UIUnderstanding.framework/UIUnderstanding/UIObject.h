@class UIObjectCompat;

@interface UIObject : NSObject

@property (readonly) UIObjectCompat *underlyingObject;

- (void).cxx_destruct;
- (id)init:(long long)a0 confidence:(double)a1 text:(id)a2 boundingBox:(id)a3 children:(id)a4 clickable:(BOOL)a5;

@end

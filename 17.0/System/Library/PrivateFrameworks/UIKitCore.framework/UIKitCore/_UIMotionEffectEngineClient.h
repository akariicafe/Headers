@class UIView, UIMotionEffect;

@interface _UIMotionEffectEngineClient : NSObject {
    UIMotionEffect *_effect;
    UIView *_view;
}

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMotionEffect:(id)a0 view:(id)a1;
- (BOOL)isEqual:(id)a0;

@end

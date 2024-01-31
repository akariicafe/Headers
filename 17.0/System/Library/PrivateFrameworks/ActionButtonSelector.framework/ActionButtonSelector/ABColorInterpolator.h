@class UIColor, ABFloatSpringProperty;

@interface ABColorInterpolator : NSObject {
    ABFloatSpringProperty *_red;
    ABFloatSpringProperty *_green;
    ABFloatSpringProperty *_blue;
    ABFloatSpringProperty *_alpha;
    BOOL _isEmpty;
    UIColor *_cachedOutputColor;
}

- (id)init;
- (void).cxx_destruct;

@end

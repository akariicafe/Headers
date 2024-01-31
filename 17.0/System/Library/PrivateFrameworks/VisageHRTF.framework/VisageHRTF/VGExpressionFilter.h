@interface VGExpressionFilter : NSObject

+ (id)getBlendshapes:(id)a0;
+ (float)clip_to_01:(float)a0 min_val:(float)a1 max_val:(float)a2;

- (float)filter:(id)a0;

@end

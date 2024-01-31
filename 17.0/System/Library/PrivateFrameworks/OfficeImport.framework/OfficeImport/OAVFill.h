@interface OAVFill : NSObject

+ (void)addStopsFromArray:(const struct OAVGradientStop { id x0; float x1; } *)a0 stopCount:(int)a1 inverted:(BOOL)a2 startPos:(float)a3 endPos:(float)a4 toGradientFill:(id)a5 manager:(id)a6;
+ (id)readBlipRefFromManager:(id)a0 state:(id)a1;
+ (id)readFromManager:(id)a0 state:(id)a1;
+ (void)readGradientFill:(id)a0 fromManager:(id)a1;
+ (void)readImageFill:(id)a0 fromManager:(id)a1 state:(id)a2;
+ (id)targetBgColorWithManager:(id)a0;
+ (id)targetFgColorWithManager:(id)a0;

@end

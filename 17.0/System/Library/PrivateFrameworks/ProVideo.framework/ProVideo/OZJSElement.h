@interface OZJSElement : NSObject <OZElementJSExport>

@property (nonatomic) void *element;
@property (nonatomic) float time;

+ (id)elementWithElement:(void *)a0;

- (void)enable;
- (void)setStartTime:(float)a0;
- (unsigned int)ID;
- (void)setPosition:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (void)disable;
- (void)clone;
- (id)name;
- (void)setRotation:(SEL)a0;
- (void)cloneAtTime:(float)a0;
- (id)getBehaviorWithName:(id)a0;
- (float)getEndTime;
- (struct SCNVector3 { float x0; float x1; float x2; })getPosition;
- (struct SCNVector3 { float x0; float x1; float x2; })getPositionAtTime:(float)a0;
- (float)getStartTime;
- (id)initWithElement:(void *)a0;

@end

@interface PHASESharedListener : PHASEListener

@property (nonatomic) long long updateMode;

- (void)setTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)dealloc;
- (void)setGain:(double)a0;
- (id)initWithEngine:(id)a0;
- (void)removeChild:(id)a0;
- (BOOL)addChild:(id)a0 error:(id *)a1;
- (id)initInternalWithEngine:(id)a0;
- (id)initWithEngine:(id)a0 entityType:(unsigned int)a1;
- (void)removeChildren;

@end

@interface GKNoiseSource : NSObject

- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (id)inputModuleAtIndex:(int)a0;
- (int)requiredInputModuleCount;
- (void)setInputModule:(id)a0 atIndex:(int)a1;

@end

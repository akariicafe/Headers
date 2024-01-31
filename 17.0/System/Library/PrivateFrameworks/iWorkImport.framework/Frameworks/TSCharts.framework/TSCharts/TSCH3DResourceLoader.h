@interface TSCH3DResourceLoader : NSObject

+ (id)loader;
+ (unsigned long long)estimatedMemoryInBytesForSize:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a0 samples:(unsigned long long)a1 hasColorbuffer:(BOOL)a2 hasDepthbuffer:(BOOL)a3;

- (void)destroyHandle:(id)a0 insideContext:(id)a1;
- (void)postbindHandle:(id)a0 config:(id)a1;
- (BOOL)shouldReuploadHandle:(id)a0 config:(id)a1;
- (unsigned long long)uploadResource:(id)a0 handle:(id)a1 insideSession:(id)a2 config:(id)a3;
- (long long)virtualScreenForContext:(id)a0;

@end

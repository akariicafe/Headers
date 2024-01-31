@interface CAMIOSurfaceWrapper : NSObject

@property (readonly, nonatomic) void *surface;

- (void)dealloc;
- (id)initWithIOSurface:(void *)a0;

@end

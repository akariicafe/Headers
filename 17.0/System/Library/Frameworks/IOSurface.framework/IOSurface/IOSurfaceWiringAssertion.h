@interface IOSurfaceWiringAssertion : NSObject {
    unsigned int _mach_port;
}

- (void)dealloc;
- (id)initWithIOSurfaceClient:(struct __IOSurfaceClient { } *)a0;
- (id)initWithIOSurface:(id)a0;

@end

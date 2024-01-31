@class NSString;

@interface SIE5RTSurfacePortDescriptor : NSObject <SIE5RTPortDescriptor> {
    struct e5rt_io_port { } *_port;
    struct e5rt_surface_desc { } *_desc;
    int _format;
    unsigned long long _width;
    unsigned long long _height;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (const unsigned long long *)getShape;
- (unsigned long long)getRank;
- (void)bindRawPointer:(const void *)a0;
- (void)bindIOSurface:(struct __IOSurface { } *)a0;
- (unsigned long long)getBatchnum;
- (unsigned long long)getBytePerRow;
- (unsigned long long)getChannels;
- (unsigned long long)getComponentSize;
- (void *)getDataPtr;
- (unsigned long long)getHeight;
- (struct __IOSurface { } *)getIOSurface;
- (unsigned long long)getNumberOfElements;
- (unsigned long long)getRowElements;
- (unsigned long long)getWidth;
- (id)initWithE5RTPort:(struct e5rt_io_port { } *)a0 portType:(long long)a1;

@end

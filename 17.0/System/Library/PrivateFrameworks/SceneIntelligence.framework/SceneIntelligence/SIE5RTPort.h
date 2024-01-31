@class NSString;
@protocol SIE5RTPortDescriptor;

@interface SIE5RTPort : NSObject {
    id<SIE5RTPortDescriptor> _desc;
    NSString *_name;
    long long _portType;
}

@property (readonly) struct e5rt_io_port { } *port;

- (void).cxx_destruct;
- (const unsigned long long *)getShape;
- (void)bindRawPointer:(const void *)a0;
- (void)bindIOSurface:(struct __IOSurface { } *)a0;
- (void)bindPixelBuffer:(struct __CVBuffer { } *)a0;
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
- (id)initPortWithE5RTStreamOperation:(struct e5rt_execution_stream_operation { } *)a0 blobName:(id)a1 portType:(long long)a2;

@end

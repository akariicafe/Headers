@interface CSUPixelBufferDescriptor : NSObject

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) unsigned long long bytesPerRowAlignment;
@property (nonatomic) BOOL isIOSurfaceBacked;

- (struct __CVBuffer { } *)createNewBuffer:(id *)a0;

@end

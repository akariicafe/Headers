@interface SCRCRawImage : NSObject

@property (nonatomic) char *data;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long bytesPerPixel;
@property (retain, nonatomic) struct CGImage { } *imageRef;

+ (id)rawImageForImage:(struct CGImage { } *)a0;

- (void)dealloc;

@end

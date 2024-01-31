@class NSString;

@interface PTTexture : NSObject

@property (retain, nonatomic) NSString *colorPrimaries;
@property (retain, nonatomic) NSString *transferFunction;
@property (retain, nonatomic) NSString *YCbCrMatrix;
@property (nonatomic) long long YCbCrColorDepth;
@property (nonatomic) BOOL YCbCrFullRange;

+ (id)createYUV420:(id)a0 chroma:(id)a1;
+ (id)createRGBA:(id)a0;
+ (BOOL)isRGBA:(struct __CVBuffer { } *)a0;
+ (id)createFromPixelbuffer:(struct __CVBuffer { } *)a0 device:(id)a1 read:(BOOL)a2 write:(BOOL)a3;
+ (id)getAttachmentString:(struct __CVBuffer { } *)a0 forKey:(struct __CFString { } *)a1;

- (unsigned long long)height;
- (unsigned long long)width;
- (void).cxx_destruct;
- (void)copyMetadataTo:(id)a0;

@end

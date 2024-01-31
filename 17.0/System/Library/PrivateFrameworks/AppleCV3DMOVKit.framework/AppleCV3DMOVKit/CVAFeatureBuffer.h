@class NSData, NSString;

@interface CVAFeatureBuffer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL compressed;
@property (nonatomic) BOOL reduce;
@property (nonatomic) struct __CVBuffer { } *pixelBufferRef;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long bytesPerRow;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long syncTimestamp;
@property (retain, nonatomic) NSString *sourceStreamID;
@property (nonatomic) unsigned long long frameId;
@property (nonatomic) unsigned long long original_width;

+ (id)classes;
+ (id)streamName:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct __CVBuffer { } *)getPixelBuffer;
- (id)initWithPixelBufferRef:(struct __CVBuffer { } *)a0 timestamp:(double)a1 streamID:(id)a2;
- (struct __CVBuffer { } *)getPixelBuffer:(BOOL)a0;
- (struct __CVBuffer { } *)getPixelBufferCopy;
- (id)initWithPixelBufferRef:(struct __CVBuffer { } *)a0 timestamp:(double)a1 streamID:(id)a2 reduce:(BOOL)a3 compress:(BOOL)a4;
- (id)reduceBuffer:(void *)a0;
- (BOOL)shouldReduce:(void *)a0;

@end

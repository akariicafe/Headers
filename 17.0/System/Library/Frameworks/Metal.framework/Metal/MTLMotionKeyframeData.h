@protocol MTLBuffer;

@interface MTLMotionKeyframeData : NSObject

@property (retain, nonatomic) id<MTLBuffer> buffer;
@property (nonatomic) unsigned long long offset;

+ (id)data;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

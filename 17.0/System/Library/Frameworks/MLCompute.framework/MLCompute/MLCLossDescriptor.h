@interface MLCLossDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) int lossType;
@property (readonly, nonatomic) int reductionType;
@property (readonly, nonatomic) float weight;
@property (readonly, nonatomic) float labelSmoothing;
@property (readonly, nonatomic) unsigned long long classCount;
@property (readonly, nonatomic) float epsilon;
@property (readonly, nonatomic) float delta;

+ (id)descriptorWithType:(int)a0 reductionType:(int)a1;
+ (id)descriptorWithType:(int)a0 reductionType:(int)a1 weight:(float)a2 labelSmoothing:(float)a3 classCount:(unsigned long long)a4;
+ (id)descriptorWithType:(int)a0 reductionType:(int)a1 weight:(float)a2;
+ (id)descriptorWithType:(int)a0 reductionType:(int)a1 weight:(float)a2 labelSmoothing:(float)a3 classCount:(unsigned long long)a4 epsilon:(float)a5 delta:(float)a6;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLossDescriptorWithType:(int)a0 reductionType:(int)a1 weight:(float)a2;
- (id)initWithLossDescriptorWithType:(int)a0 reductionType:(int)a1 weight:(float)a2 labelSmoothing:(float)a3 classCount:(unsigned long long)a4 epsilon:(float)a5 delta:(float)a6;

@end

@interface MPSNDArrayIm2colDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long kernelWidth;
@property (nonatomic) unsigned long long kernelHeight;
@property (nonatomic) unsigned long long strideInPixelsX;
@property (nonatomic) unsigned long long strideInPixelsY;
@property (nonatomic) unsigned long long dilationRateInX;
@property (nonatomic) unsigned long long dilationRateInY;
@property (nonatomic) unsigned long long paddingLeft;
@property (nonatomic) unsigned long long paddingRight;
@property (nonatomic) unsigned long long paddingTop;
@property (nonatomic) unsigned long long paddingBottom;
@property (nonatomic) unsigned int dataLayout;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

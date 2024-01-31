@interface TSKStepperSliderFormat_DEPRECATED : TSKFormat <NSCopying>

@property (readonly, nonatomic) double minimum;
@property (readonly, nonatomic) double maximum;
@property (readonly, nonatomic) double increment;
@property (readonly, nonatomic) unsigned int displayFormatType;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFormatType:(unsigned int)a0;
- (id)initWithFormatType:(unsigned int)a0 minimum:(double)a1 maximum:(double)a2 increment:(double)a3 displayFormatType:(unsigned int)a4;
- (id)asStepperSliderFormat;

@end

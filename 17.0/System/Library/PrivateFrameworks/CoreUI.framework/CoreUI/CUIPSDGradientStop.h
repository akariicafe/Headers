@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying> {
    double location;
}

+ (void)initialize;

- (id)initWithLocation:(double)a0;
- (double)location;
- (void)encodeWithCoder:(id)a0;
- (void)setLocation:(double)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isColorStop;
- (BOOL)isDoubleStop;
- (BOOL)isOpacityStop;

@end

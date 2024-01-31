@class UIColor;

@interface PXSnapStripViewIndicatorInfo : NSObject

@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) double offset;
@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic) BOOL disabled;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithOffset:(double)a0 color:(id)a1 style:(unsigned long long)a2;
- (BOOL)isEqualToIndicatorInfo:(id)a0;

@end

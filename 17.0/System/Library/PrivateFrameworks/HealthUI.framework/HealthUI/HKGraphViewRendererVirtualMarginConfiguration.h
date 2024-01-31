@interface HKGraphViewRendererVirtualMarginConfiguration : NSObject

@property (readonly, nonatomic) double virtualLeftMarginWidth;
@property (readonly, nonatomic) double virtualRightMarginWidth;
@property (readonly, nonatomic) long long virtualLeftMarginStyle;
@property (readonly, nonatomic) long long virtualRightMarginStyle;

- (id)initWithVirtualLeftMarginWidth:(double)a0 virtualRightMarginWidth:(double)a1 virtualLeftMarginStyle:(long long)a2 virtualRightMarginStyle:(long long)a3;

@end

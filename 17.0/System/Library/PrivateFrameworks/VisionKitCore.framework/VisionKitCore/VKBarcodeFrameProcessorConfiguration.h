@class NSArray;

@interface VKBarcodeFrameProcessorConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL isForSingleItem;
@property (nonatomic) struct CGPoint { double x; double y; } comparisonPoint;
@property (copy, nonatomic) NSArray *symbologies;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToBarcodeFrameProcessorConfiguration:(id)a0;

@end

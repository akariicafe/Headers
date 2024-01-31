@interface RTCellIndex : NSObject <NSCopying>

@property (nonatomic) short x;
@property (nonatomic) short y;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithX:(short)a0 Y:(short)a1;

@end

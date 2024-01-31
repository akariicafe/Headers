@interface CCUIControlCenterPositionProviderPackingRule : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long packFrom;
@property (readonly, nonatomic) unsigned long long packingOrder;
@property (readonly, nonatomic) struct CCUILayoutSize { unsigned long long width; unsigned long long height; } sizeLimit;

- (id)initWithPackFrom:(unsigned long long)a0 packingOrder:(unsigned long long)a1 sizeLimit:(struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

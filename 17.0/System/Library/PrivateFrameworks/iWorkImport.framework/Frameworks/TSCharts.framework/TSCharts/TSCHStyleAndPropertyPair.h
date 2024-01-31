@class TSSStyle;

@interface TSCHStyleAndPropertyPair : NSObject <NSCopying>

@property (readonly, nonatomic) TSSStyle *style;
@property (readonly, nonatomic) int property;

+ (id)pairWithStyle:(id)a0 property:(int)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStyle:(id)a0 property:(int)a1;

@end

@interface SKUIMutableIntegerValue : NSObject <NSCopying>

@property (nonatomic) long long integerValue;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

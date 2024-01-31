@interface TSCH3DMaterial : NSObject <NSCopying>

+ (id)material;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasCompleteData;

@end

@interface TSCH3DMaterialPackage : NSObject <NSCopying>

+ (id)package;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasCompleteData;
- (void)didInitFromSOS;

@end

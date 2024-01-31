@interface AXPiOSElementData : NSObject <NSCopying>

@property (nonatomic) struct { unsigned long long elementOrHash; unsigned long long elementID; } uid;
@property (nonatomic) int pid;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

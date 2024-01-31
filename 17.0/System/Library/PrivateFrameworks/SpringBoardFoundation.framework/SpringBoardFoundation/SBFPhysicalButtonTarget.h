@interface SBFPhysicalButtonTarget : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long button;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, nonatomic) unsigned long long identifier;

+ (id)targetWithPhysicalButton:(unsigned long long)a0 generation:(unsigned long long)a1;
+ (id)targetWithPhysicalButton:(unsigned long long)a0 generation:(unsigned long long)a1 identifier:(unsigned long long)a2;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

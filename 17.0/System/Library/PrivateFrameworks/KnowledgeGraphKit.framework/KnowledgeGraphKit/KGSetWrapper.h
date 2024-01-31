@class NSSet;

@interface KGSetWrapper : NSObject <NSCopying>

@property (readonly, nonatomic) NSSet *set;
@property (readonly, nonatomic) unsigned long long count;

- (id)initWithSet:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

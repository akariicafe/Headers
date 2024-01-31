@class NSNumber;

@interface CKVItemIdentity : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *contentHash;
@property (readonly, nonatomic) NSNumber *instanceHash;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContentHash:(id)a0 instanceHash:(id)a1;

@end

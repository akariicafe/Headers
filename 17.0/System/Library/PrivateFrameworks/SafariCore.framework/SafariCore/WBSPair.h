@interface WBSPair : NSObject <NSCopying>

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

- (id)init;
- (unsigned long long)hash;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getFirst:(id *)a0 second:(id *)a1;

@end

@class NSUUID;

@interface ITAttentionAwarenessContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *identifier;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

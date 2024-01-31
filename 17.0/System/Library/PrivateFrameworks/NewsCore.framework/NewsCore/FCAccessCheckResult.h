@interface FCAccessCheckResult : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL canAccess;
@property (readonly, nonatomic) unsigned long long blockedReason;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCanAccess:(BOOL)a0 blockedReason:(unsigned long long)a1;

@end

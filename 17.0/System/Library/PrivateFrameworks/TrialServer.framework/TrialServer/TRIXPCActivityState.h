@interface TRIXPCActivityState : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long futureCompletionStatus;
@property (readonly, nonatomic) unsigned long long capabilities;

+ (id)xPCActivityStateWithFutureCompletionStatus:(unsigned long long)a0 capabilities:(unsigned long long)a1;

- (id)init;
- (unsigned long long)hash;
- (id)initWithFutureCompletionStatus:(unsigned long long)a0 capabilities:(unsigned long long)a1;
- (BOOL)isEqualToXPCActivityState:(id)a0;
- (id)copyWithReplacementFutureCompletionStatus:(unsigned long long)a0;
- (id)copyWithReplacementCapabilities:(unsigned long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

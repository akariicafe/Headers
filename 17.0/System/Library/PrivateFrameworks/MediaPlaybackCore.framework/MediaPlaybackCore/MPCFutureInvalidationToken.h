@class MPCFuture;

@interface MPCFutureInvalidationToken : NSObject <NSCopying>

@property (retain, nonatomic) MPCFuture *future;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@interface SKUINavigationStackEnsureConsistencyRequest : NSObject <NSCopying>

@property (readonly, nonatomic) long long navigationControllerOperation;
@property (readonly, nonatomic) BOOL operationDidComplete;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNavigationControllerOperation:(long long)a0 operationDidComplete:(BOOL)a1;

@end

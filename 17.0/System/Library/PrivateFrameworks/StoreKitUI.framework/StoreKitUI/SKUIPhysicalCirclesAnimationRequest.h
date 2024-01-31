@interface SKUIPhysicalCirclesAnimationRequest : NSObject <NSCopying> {
    id /* block */ _completionBlock;
}

@property (nonatomic) long long animationType;

- (void).cxx_destruct;
- (void)_setCompletionBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finishAnimation;

@end

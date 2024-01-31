@interface PERotateAction : PEEditAction

@property (nonatomic) long long rotateDirection;

- (long long)actionType;
- (void)applyToLoadResult:(id)a0 completion:(id /* block */)a1;

@end

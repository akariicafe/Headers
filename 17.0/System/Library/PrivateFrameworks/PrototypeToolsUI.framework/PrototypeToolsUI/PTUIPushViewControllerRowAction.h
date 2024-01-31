@interface PTUIPushViewControllerRowAction : PTRowAction

@property (readonly, nonatomic) id /* block */ viewControllerCreator;

+ (id)actionWithViewControllerCreator:(id /* block */)a0;

- (id /* block */)defaultHandler;
- (void).cxx_destruct;
- (BOOL)deselectsRowOnSuccess;

@end

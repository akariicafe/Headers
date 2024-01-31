@interface PTSingleTestRecipe : PTTestRecipe

@property (copy, nonatomic) id /* block */ action;

+ (id)recipeWithTitle:(id)a0 action:(id /* block */)a1;
+ (id)recipeWithTitle:(id)a0 prepareBlock:(id /* block */)a1 action:(id /* block */)a2 cleanupBlock:(id /* block */)a3;

- (void)_handleEvent:(long long)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_wantsEvent:(long long)a0;

@end

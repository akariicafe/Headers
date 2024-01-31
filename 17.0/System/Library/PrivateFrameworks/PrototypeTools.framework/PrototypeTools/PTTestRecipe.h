@class NSString, PTTestRecipeInfo;

@interface PTTestRecipe : NSObject

@property (retain, nonatomic) PTTestRecipeInfo *info;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ prepareBlock;
@property (copy, nonatomic) id /* block */ cleanupBlock;

- (void)_deactivate;
- (void)_handleEvent:(long long)a0;
- (void)_activate;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_wantsEvent:(long long)a0;
- (id)_initWithTitle:(id)a0 prepareBlock:(id /* block */)a1 cleanupBlock:(id /* block */)a2;

@end

@class SUProductPageViewController;

@interface StoreScriptInterface : SUScriptInterface

@property (weak, nonatomic) SUProductPageViewController *parentProductPageViewController;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;

- (void).cxx_destruct;
- (id)makeStoreSheetRequest;
- (void)showStoreSheetWithRequest:(id)a0 animated:(BOOL)a1;

@end

@class NSHashTable;

@interface CPSWindow : UIWindow

@property (retain, nonatomic) NSHashTable *observers;

- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (void)removeEventObserver:(id)a0;
- (void)addEventObserver:(id)a0;
- (BOOL)_isKeyWindowForDeferral;

@end

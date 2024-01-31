@interface SearchUIWatchListCache : TLKAsyncCache

- (id)init;
- (void)computeObjectForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)getButtonsForWatchListIdentifier:(id)a0 type:(int)a1 isHorizontallySrollingStyle:(BOOL)a2 completion:(id /* block */)a3;

@end

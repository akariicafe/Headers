@class NSMutableArray;

@interface SFUnifiedTabBarItemViewRegistration : NSObject {
    id /* block */ _configurationHandler;
    id /* block */ _viewProvider;
    NSMutableArray *_viewReuseStack;
}

- (void).cxx_destruct;
- (void)configureView:(id)a0 forItem:(id)a1 inArrangement:(id)a2 isPreview:(BOOL)a3;
- (id)createItemView;
- (id)dequeueOrCreateViewForItem:(id)a0 isPreview:(BOOL)a1;
- (void)enqueueItemView:(id)a0;
- (id)initWithViewProvider:(id /* block */)a0 configurationHandler:(id /* block */)a1;

@end

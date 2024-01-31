@class NSString;

@interface UserNavigationDropInteraction : UIDropInteraction <UIDropInteractionDelegate, UIDropInteractionDelegate_Private> {
    id /* block */ _navigationHandler;
    BOOL _opensNewTab;
    long long _tabOrder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOpensNewTab:(BOOL)a0 tabOrder:(long long)a1 navigationHandler:(id /* block */)a2;
- (long long)_dropInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void).cxx_destruct;

@end

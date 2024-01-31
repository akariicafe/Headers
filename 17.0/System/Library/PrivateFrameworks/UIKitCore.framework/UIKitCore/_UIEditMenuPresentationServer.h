@class NSString, NSMutableDictionary;

@interface _UIEditMenuPresentationServer : NSObject <_UIEditMenuPresentationDelegate>

@property (retain, nonatomic) NSMutableDictionary *configurations;
@property (retain, nonatomic) NSMutableDictionary *presentations;
@property (retain, nonatomic) NSMutableDictionary *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPresentationServer;

- (id)init;
- (void)_editMenuPresentation:(id)a0 didTransitionMenuForConfiguration:(id)a1;
- (id)_editMenuPresentation:(id)a0 titleViewForMenu:(id)a1 configuration:(id)a2;
- (void)_editMenuPresentation:(id)a0 willPresentMenuForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (void)_editMenuPresentation:(id)a0 willDismissMenuForConfiguration:(id)a1 animator:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_editMenuPresentation:(id)a0 targetRectForConfiguration:(id)a1;
- (void)_editMenuPresentation:(id)a0 didSelectMenuLeaf:(id)a1 completion:(id /* block */)a2;
- (void)_editMenuPresentation:(id)a0 preparedMenuForDisplay:(id)a1 completion:(id /* block */)a2;
- (void)_sendLifecycleEvent:(long long)a0 forMenuWithIdentifier:(id)a1;
- (void)dismissEditMenuForIdentifier:(id)a0 hideReason:(long long)a1;
- (void)presentEditMenuWithConfiguration:(id)a0 originContext:(id)a1 inDisplayDelegate:(id)a2 forConnection:(id)a3;
- (void)replaceEditMenuForIdentifier:(id)a0 updatedMenu:(id)a1 reason:(long long)a2;
- (void)updateUserInterfaceStyleForMenuWithIdentifier:(id)a0 userInterfaceStyle:(long long)a1;

@end

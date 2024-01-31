@class SBSSystemApertureSceneCreationRequestServer, NSString, SBSystemApertureController, NSMapTable, NSMutableSet;

@interface SBSystemApertureSceneHoster : NSObject <SBSSystemApertureSceneCreationRequestServerDelegate, BSInvalidatable> {
    NSMapTable *_activeElements;
    NSMutableSet *_pendingElements;
}

@property (weak, nonatomic) SBSystemApertureController *systemApertureController;
@property (retain, nonatomic) SBSSystemApertureSceneCreationRequestServer *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)sceneCreationRequestServer:(id)a0 didReceiveRequestForSystemApertureSceneWithClientIdentity:(id)a1 requestIdentifier:(id)a2;
- (void)_removeElement:(id)a0;
- (void)_addPendingElement:(id)a0;
- (void)_enumerateElementsUsingBlock:(id /* block */)a0;
- (void)_invalidateElement:(id)a0;
- (void)_registerElement:(id)a0;
- (void)_removePendingElement:(id)a0;
- (void)activateWithSystemApertureController:(id)a0;

@end

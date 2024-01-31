@class NSString, EXBDisplayProfileRegistry, SBExtendedDisplayProfileFactory, SBMirroringDisplayProfileFactory, SBEmbeddedDisplayProfileFactory, NSMapTable;

@interface SBDisplayProfileRegistry : NSObject <SBEmbeddedDisplayProfileFactoryDelegate, SBExtendedDisplayProfileFactoryDelegate> {
    EXBDisplayProfileRegistry *_displayProfileRegistry;
    SBEmbeddedDisplayProfileFactory *_embeddedDisplayProfileFactory;
    SBExtendedDisplayProfileFactory *_extendedDisplayProfileFactory;
    SBMirroringDisplayProfileFactory *_mirroringDisplayProfileFactory;
    long long _startupEmbeddedOrientation;
    NSMapTable *_profileToWindowingMode;
    NSMapTable *_displayToWindowingMode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_registerEmbeddedDisplayProfile;
- (id)_modifyParameters:(id)a0 orientation:(long long)a1 orientationEventsEnabled:(BOOL)a2 chamoisEnabled:(BOOL)a3;
- (void)_registerExtendedProfile;
- (void)_registerMirroringProfile;
- (void)embeddedFactory:(id)a0 modifyInitialSceneParameters:(id)a1;
- (void)extendedFactory:(id)a0 modifyInitialSceneParameters:(id)a1;

@end

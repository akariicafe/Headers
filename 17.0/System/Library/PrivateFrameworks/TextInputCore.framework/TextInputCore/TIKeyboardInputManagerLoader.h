@class NSMutableDictionary, TIKeyboardInputManagerLoaderSyncHelper, NSXPCConnection;

@interface TIKeyboardInputManagerLoader : NSObject {
    TIKeyboardInputManagerLoaderSyncHelper *_helper;
    NSMutableDictionary *_availableInputManagers;
    NSMutableDictionary *_lastUsedDate;
    NSMutableDictionary *_activeInputManagers;
}

@property (nonatomic) NSXPCConnection *interactingConnection;

+ (id)sharedLoader;

- (id)init;
- (void)dealloc;
- (void)removeInputModeFromAllContainers:(id)a0;
- (void)releaseAllInputManagers;
- (id)currentLoadedInputModes;
- (BOOL)hasActiveInputManagers;
- (void)prepareForKeyboardActivity;
- (void)registerMaintenanceActivity;
- (void)startSyncHelper;
- (void).cxx_destruct;
- (void)prepareForKeyboardInactivity;
- (void)reduceInputManagerCacheToSize:(int)a0;
- (id)activeInputModeIdentifiers;
- (void)cacheInputManager:(id)a0;
- (BOOL)isActiveInputManager:(id)a0;
- (id)inputManagerForInputMode:(id)a0 withKeyboardState:(id)a1 class:(Class)a2;

@end

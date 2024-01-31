@class NSMapTable;

@interface _SBActiveRemoteTransientOverlayViewProviderRegistry : NSObject {
    NSMapTable *_viewProviderAdapterForSceneIdentifier;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerViewProvider:(id)a0;
- (void)unregisterViewProvider:(id)a0;

@end

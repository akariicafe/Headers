@class NSString, NSMapTable, NSMutableSet, NSHashTable, SBWindowScene;

@interface SBSystemActionPreviewCoordinator : NSObject <SBSystemActionPreviewCoordinating> {
    NSMutableSet *_previewProviders;
    NSHashTable *_observers;
    NSHashTable *_activeSceneElementProviders;
    NSMapTable *_activeSimplePreviewElementsToAssertions;
}

@property (readonly, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)customSoundForPerformingAction:(id)a0;
- (id)previewContextForAction:(id)a0;
- (void)provideDiscreteNoActionInteractionFeedback;
- (id)showPreviewForAction:(id)a0 withContext:(id)a1;

@end

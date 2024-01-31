@protocol SBSceneHandleObserver;

@interface _SBSceneHandleObserverBehavior : NSObject

@property (readonly, weak, nonatomic) id<SBSceneHandleObserver> observer;
@property (nonatomic) BOOL didCreateScene;
@property (nonatomic) BOOL didDestroyScene;
@property (nonatomic) BOOL didUpdateContentState;
@property (nonatomic) BOOL didUpdateSettingsWithDiff;
@property (nonatomic) BOOL didUpdateClientSettingsWithDiff;
@property (nonatomic) BOOL didUpdatePairingStatusForExternalSceneIdentifiers;
@property (nonatomic) BOOL replacedWithSceneHandle;

+ (id)behaviorFromObserver:(id)a0;

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;

@end

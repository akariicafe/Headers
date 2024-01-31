@class NSString, UIWindow, _UIKeyWindowSceneStack;
@protocol BSInvalidatable;

@interface _UIKeyWindowEvaluator : NSObject <BSDebugDescriptionProviding> {
    unsigned long long _countOfFBSSceneBackedScenesByShiftedIdiom[11];
    unsigned long long _defaultEvaluationStrategyByShiftedIdiom[11];
    _UIKeyWindowSceneStack *_keyWindowSceneStack;
    _UIKeyWindowSceneStack *_excludedSceneStack;
    UIWindow *_applicationKeyWindow;
    id<BSInvalidatable> _stateCaptureToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedEvaluator;

- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end

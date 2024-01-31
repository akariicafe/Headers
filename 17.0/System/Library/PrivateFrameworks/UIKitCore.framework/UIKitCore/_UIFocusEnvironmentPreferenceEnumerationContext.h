@class NSMapTable, NSArray, NSString, UIFocusSystem, NSHashTable, NSMutableArray, _UIDebugLogStack;
@protocol _UIFocusEnvironmentPreferenceEnumerationContextDelegate, UIFocusEnvironment;

@interface _UIFocusEnvironmentPreferenceEnumerationContext : NSObject <_UIFocusEnvironmentPreferenceEnumerationContext> {
    UIFocusSystem *_focusSystem;
    id<UIFocusEnvironment> _preferredSubtree;
    NSMutableArray *_visitedEnvironmentStack;
    id<UIFocusEnvironment> _lastPrimaryPreferredEnvironment;
    NSArray *_cachedPreferredEnvironments;
    NSHashTable *_allVisitedEnvironments;
    BOOL _hasResolvedPreferredFocusEnvironments;
    BOOL _hasNeverPoppedInPreferredSubtree;
    id<UIFocusEnvironment> _preferredSubtreeEntryPoint;
    NSMapTable *_preferredEnvironmentsMap;
}

@property (weak, nonatomic) id<_UIFocusEnvironmentPreferenceEnumerationContextDelegate> delegate;
@property (retain, nonatomic) _UIDebugLogStack *debugStack;
@property (readonly, nonatomic, getter=isInPreferredSubtree) BOOL inPreferredSubtree;
@property (readonly, nonatomic) id<UIFocusEnvironment> environment;
@property (readonly, nonatomic) BOOL isPrimaryPreference;
@property (readonly, nonatomic) BOOL isLeafPreference;
@property (readonly, nonatomic, getter=isPreferredByItself) BOOL preferredByItself;
@property (readonly, nonatomic) BOOL prefersNothingFocused;
@property (readonly, nonatomic) id<UIFocusEnvironment> preferringEnvironment;
@property (readonly, nonatomic) NSArray *preferredEnvironments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_inferPreferencesForEnvironment:(id)a0;
- (void)_invalidatePreferredEnvironments;
- (BOOL)_isAllowedToPreferEnvironment:(id)a0;
- (void)_reportInferredPreferredFocusEnvironment:(id)a0;
- (void)_resolvePreferredFocusEnvironments;
- (id)_startLogging;
- (void)_stopLogging;
- (id)initWithFocusEnvironment:(id)a0 enumerationMode:(long long)a1;
- (void)popEnvironment;
- (void)pushEnvironment:(id)a0;

@end

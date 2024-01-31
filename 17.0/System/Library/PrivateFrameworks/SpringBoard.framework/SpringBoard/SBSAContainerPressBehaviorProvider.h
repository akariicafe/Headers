@class SBSAContainerLongPressGestureDescription, NSUUID;

@interface SBSAContainerPressBehaviorProvider : SBSABasePreferencesProvider {
    SBSAContainerLongPressGestureDescription *_activeGestureDescription;
    NSUUID *_identifierOfActiveTimer;
}

- (void).cxx_destruct;
- (id)_contentInteractionBeginBehaviorSettings;
- (id)preferencesFromContext:(id)a0;

@end

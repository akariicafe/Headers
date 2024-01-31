@class UIWindow, NSString, NSUUID, NSHashTable, _UIActiveViewServiceSessionTracker;
@protocol _UIViewServiceSessionActivityProviding;

@interface _UIViewServiceSessionActivityRecord : NSObject <BSDebugDescriptionProviding> {
    NSHashTable *_activityWindows;
    BOOL _hasInvalidated;
    int _lastViewControllerAppearState;
    _UIActiveViewServiceSessionTracker *_tracker;
    id<_UIViewServiceSessionActivityProviding> _lastActivityProvider;
    unsigned long long _lastActivity;
    unsigned long long _lastActivityTimestamp;
    NSUUID *_sessionIdentifier;
    long long _userInterfaceIdiom;
    UIWindow *_primaryHostedWindow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end

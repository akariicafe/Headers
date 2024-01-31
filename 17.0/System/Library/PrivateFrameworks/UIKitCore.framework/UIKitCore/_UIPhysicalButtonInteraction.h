@class NSMutableDictionary, NSArray, NSSet, NSString, _UIPhysicalButtonConfigurationSet, UIView, NSMutableArray;
@protocol _UIPhysicalButtonInteractionDelegate, BSInvalidatable;

@interface _UIPhysicalButtonInteraction : NSObject <_UIPhysicalButtonInteractionDriverReceiving, BSDebugDescriptionProviding, UIInteraction> {
    NSMutableArray *_drivers;
    NSMutableDictionary *_actionsByPhysicalButton;
    NSMutableArray *_orderedActionsForAllPhysicalButtons;
    struct { unsigned char registrationPendingDidMoveToWindow : 1; unsigned char registrationPendingWindowMoveToScene : 1; unsigned char wantsRelaxedVisibilityRequirement : 1; unsigned char wantsSystemShellExclusivePriority : 1; } _interactionFlags;
    id<BSInvalidatable> _arbiterRegistrationToken;
}

@property (readonly, nonatomic) BOOL _isProxyInteraction;
@property (readonly, copy, nonatomic) NSArray *_driverClasses;
@property (readonly, copy, nonatomic) _UIPhysicalButtonConfigurationSet *_configurationSet;
@property (nonatomic, setter=_setWantsRelaxedVisibilityRequirement:) BOOL _wantsRelaxedVisibilityRequirement;
@property (nonatomic, setter=_setWantsSystemShellExclusivePriority:) BOOL _wantsSystemShellExclusivePriority;
@property (copy, nonatomic, setter=_setConfigurations:) NSSet *_configurations;
@property (readonly, weak, nonatomic) id<_UIPhysicalButtonInteractionDelegate> _delegate;
@property (nonatomic, setter=_setIdentifier:) unsigned long long _identifier;
@property (copy, nonatomic, setter=_setName:) NSString *_name;
@property (nonatomic, getter=_isEnabled, setter=_setEnabled:) BOOL _enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)didMoveToView:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)willMoveToView:(id)a0;
- (id)_configurationForButton:(unsigned long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)_didMoveFromWindow:(id)a0 toWindow:(id)a1;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (void)_driver:(id)a0 didCreateProposedAction:(id)a1;
- (void)_viewVisibilityDidChange;
- (void)_willMoveFromWindow:(id)a0 toWindow:(id)a1;
- (void)_windowDidMoveToScene:(id)a0;
- (void)_windowWillMoveToScene:(id)a0;
- (id)initWithConfigurations:(id)a0 delegate:(id)a1;

@end

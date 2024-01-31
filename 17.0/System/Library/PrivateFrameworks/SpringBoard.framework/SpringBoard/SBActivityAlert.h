@class NSString, ACUISActivityAlertOptions, SBActivityItem;

@interface SBActivityAlert : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) SBActivityItem *item;
@property (readonly, copy, nonatomic) NSString *payloadIdentifier;
@property (readonly, nonatomic) ACUISActivityAlertOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)_playSound;
- (BOOL)_hasPresentationDestination:(long long)a0;
- (BOOL)_isHostApplicationForeground;
- (void)alertWithScreenOn:(BOOL)a0 playSound:(BOOL)a1;
- (BOOL)canPresentInEnvironment:(long long)a0 alertType:(long long)a1;
- (id)initWithItem:(id)a0 payloadIdentifier:(id)a1 options:(id)a2;
- (BOOL)shouldAlertInEnvironment:(long long)a0;

@end

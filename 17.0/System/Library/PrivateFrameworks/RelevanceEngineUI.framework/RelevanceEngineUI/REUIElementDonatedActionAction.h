@class NSString, REUISiriActionsPerformer, UIImage, REUIDonatedElementProperties;
@protocol REUIElementDonatedActionActionDelegate;

@interface REUIElementDonatedActionAction : REElementAction <REUISiriActionsPerformerDelegate>

@property (retain, nonatomic) REUISiriActionsPerformer *performer;
@property (retain, nonatomic) REUIDonatedElementProperties *properties;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) UIImage *appIcon;
@property (weak, nonatomic) id<REUIElementDonatedActionActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProperties:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fullsizeAppIcon;
- (void)siriActionsPerformerDidSucceed:(id)a0;
- (id)_newPerformer;
- (void)_performWithContext:(id)a0;
- (void)siriActionsPerformer:(id)a0 didFailWithError:(id)a1;
- (BOOL)siriActionsPerformer:(id)a0 wantsToDismissViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)siriActionsPerformer:(id)a0 wantsToPresentViewController:(id)a1;
- (id)siriActionsPerformerWantsAlertBackgroundImage:(id)a0;
- (id)siriActionsPerformerWantsBackgroundViewToBlur:(id)a0;
- (void)siriActionsPerformerWantsToSuppressDismissal:(id)a0;

@end

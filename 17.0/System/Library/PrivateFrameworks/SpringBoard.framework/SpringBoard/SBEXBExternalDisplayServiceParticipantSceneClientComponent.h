@class NSString, FBSDisplayConfiguration, SBExternalDisplayDefaults, SBExternalDisplayService;

@interface SBEXBExternalDisplayServiceParticipantSceneClientComponent : FBSSceneComponent <SBEXBExternalDisplayServiceParticipant> {
    SBExternalDisplayService *_externalDisplayService;
    SBExternalDisplayDefaults *_defaults;
}

@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isExtendedDisplayCapable) BOOL extendedDisplayCapable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

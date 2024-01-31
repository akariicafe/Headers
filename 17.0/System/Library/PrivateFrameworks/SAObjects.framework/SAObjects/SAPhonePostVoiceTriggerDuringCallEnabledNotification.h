@interface SAPhonePostVoiceTriggerDuringCallEnabledNotification : SABaseClientBoundCommand

@property (nonatomic) BOOL enableVoiceTriggerDuringPhoneCall;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end

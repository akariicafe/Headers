@interface WFShareExtensionAction : WFAction

+ (id)userInterfaceProtocol;

- (id)extensionBundleIdentifier;
- (id)inputType;
- (id)inputConfiguration;
- (id)descriptionSummary;
- (id)contentItemClasses;
- (id)inputContentClasses;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)stringRepresentationForClasses:(id)a0;
- (id)extensionUserInfo;
- (id)shareExtensionDefinition;
- (id)socialServiceType;
- (id)socialTypes;
- (id)textItemHandling;

@end

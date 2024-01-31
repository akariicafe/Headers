@interface SBSConnectedDisplayInfoFactory : NSObject

- (id)_effectiveSettingsForDisplayConfiguration:(id)a0 defaults:(id)a1;
- (unsigned long long)_supportedScalesForDisplayConfiguration:(id)a0 defaults:(id)a1 error:(out id *)a2;
- (id)connectedDisplayInfoForDisplayConfiguration:(id)a0 externalDisplayDefaults:(id)a1;

@end

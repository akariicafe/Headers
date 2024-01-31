@interface MFNTLMAuthScheme : MFAuthScheme

- (id)name;
- (id)humanReadableName;
- (Class)authenticatorClass;
- (BOOL)hasEncryption;
- (BOOL)sendsPlainTextPasswords;

@end

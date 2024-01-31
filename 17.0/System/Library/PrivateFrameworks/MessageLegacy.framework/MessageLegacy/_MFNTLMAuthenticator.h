@interface _MFNTLMAuthenticator : MFSASLAuthenticator {
    struct NtlmGenerator { } *_ntlmGeneratorRef;
    int _ntlmError;
}

- (void)dealloc;
- (id)responseForServerData:(id)a0;
- (void)setAuthenticationState:(int)a0;

@end

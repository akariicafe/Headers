@class NSData;

@interface _MFDigestMD5Authenticator : MFSASLAuthenticator {
    unsigned short _maxbuf : 16;
    unsigned char _securityLevel : 2;
    NSData *_expectedResponse;
    void *_cryptInfo;
}

- (void)dealloc;
- (int)securityLevel;
- (id)responseForServerData:(id)a0;
- (void)setAuthenticationState:(int)a0;
- (void)setCryptInfo:(void *)a0;
- (void)setExpectedResponse:(id)a0;
- (void)setMaxBuffer:(unsigned int)a0;
- (void)setSecurityLevel:(int)a0;

@end

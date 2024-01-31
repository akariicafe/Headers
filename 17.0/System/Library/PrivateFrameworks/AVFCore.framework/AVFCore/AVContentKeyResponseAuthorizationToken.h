@class NSData;

@interface AVContentKeyResponseAuthorizationToken : AVContentKeyResponse {
    NSData *_authorizationTokenData;
}

- (void)dealloc;
- (id)initWithAuthorizationTokenData:(id)a0;

@end

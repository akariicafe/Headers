@class _SFSymmetricKey;

@interface _SFKeychainKeyFetchResult : _SFKeychainFetchResult {
    id _keyFetchResult;
}

@property (readonly) _SFSymmetricKey *value;

- (void)fetchValueWithAuthenticationContext:(id)a0 resultHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end

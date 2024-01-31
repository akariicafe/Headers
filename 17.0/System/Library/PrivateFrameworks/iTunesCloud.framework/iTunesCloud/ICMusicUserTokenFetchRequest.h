@class NSString, ICClientInfo;

@interface ICMusicUserTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding> {
    ICClientInfo *_clientInfo;
    NSString *_developerToken;
    unsigned long long _options;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)performRequestOnOperationQueue:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_executeByPerformingStoreRequestWithContext:(id)a0 qualityOfService:(long long)a1;
- (id)initWithDeveloperToken:(id)a0 clientInfo:(id)a1 options:(unsigned long long)a2;

@end

@class NSString, ACAccount;

@interface CDPQuotaStorageAppListRequest : AARequest {
    NSString *_urlStringFormat;
}

@property (readonly, nonatomic) ACAccount *account;

- (id)urlString;
- (id)urlRequest;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)_acceptedLanguageString;
- (id)_urlStringFormatFromBag;
- (BOOL)isUrlAvailable;

@end

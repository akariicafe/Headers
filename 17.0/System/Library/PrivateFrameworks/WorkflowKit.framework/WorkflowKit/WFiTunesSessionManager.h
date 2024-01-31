@class NSURL, NSURLSession;

@interface WFiTunesSessionManager : NSObject

@property (readonly, copy, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSURLSession *session;

- (id)init;
- (void).cxx_destruct;
- (void)lookupMediaWithISBN:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)getMediaWithURL:(id)a0 completion:(id /* block */)a1;
- (id)initWithSessionConfiguration:(id)a0;
- (void)lookupMediaWithBundleIdentifier:(id)a0 countryCode:(id)a1 completion:(id /* block */)a2;
- (void)lookupMediaWithIdentifiers:(id)a0 countryCode:(id)a1 completion:(id /* block */)a2;
- (void)lookupMediaWithUPC:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)searchForMediaOfType:(id)a0 limitedToEntityType:(id)a1 withTerm:(id)a2 forAttribute:(id)a3 countryCode:(id)a4 limit:(unsigned long long)a5 completion:(id /* block */)a6;

@end

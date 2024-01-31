@class iCloudMailAccountProviderSwift;

@interface iCloudMailAccountProvider : NSObject {
    iCloudMailAccountProviderSwift *provider;
}

- (void).cxx_destruct;
- (id)initWithAccountStore:(id)a0 appleAccount:(id)a1 presenter:(id)a2;
- (void)presentWithAlert:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)presentWithCompletionHandler:(id /* block */)a0;

@end

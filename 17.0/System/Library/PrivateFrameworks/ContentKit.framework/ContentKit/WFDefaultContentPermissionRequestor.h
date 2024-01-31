@class WFContactStore;

@interface WFDefaultContentPermissionRequestor : NSObject <WFContentPermissionRequestor>

@property (retain, nonatomic) WFContactStore *contactStore;

- (void).cxx_destruct;
- (void)allowContactsAccessWithCompletionHandler:(id /* block */)a0;
- (void)allowNetworkAccessAfterPromptingForURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void)allowNetworkAccessWithoutPromptingWithCompletionHandler:(id /* block */)a0;
- (void)requestUserConsentToLoadWebContentAtURL:(id)a0 completionHandler:(id /* block */)a1;

@end

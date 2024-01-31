@class NSString, NSMutableDictionary, NSError;

@interface ASAutodiscoverTask : ASTask {
    NSString *_serverURL;
    NSString *_emailAddress;
    NSString *_redirectEmail;
    NSString *_authUsername;
    NSMutableDictionary *_accountInfo;
    NSError *_discoveryError;
}

@property (retain, nonatomic) NSString *originalURLScheme;
@property (nonatomic) BOOL wasRedirectedThroughHTTP;

- (id)requestBody;
- (double)timeoutInterval;
- (id)contentType;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)_url;
- (BOOL)processContext:(id)a0;
- (id)_HTTPMethodForRequest:(id)a0;
- (void)_addAuthToRequest:(id)a0;
- (id)_easVersion;
- (void)_handleActionNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
- (void)_handleErrorNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
- (void)_handleServerNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
- (void)_handleUserNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
- (id)_policyKey;
- (void)_setAccountInfoFromAutoDiscoveryXML:(id)a0;
- (BOOL)_shouldRedirectToHTTPForRequest:(id)a0;
- (BOOL)_shouldSendAuthForRequest:(id)a0;
- (void)didProcessContext:(id)a0;
- (id)initWithURL:(id)a0 emailAddress:(id)a1 authUsername:(id)a2;
- (id)localizedErrorStringForCertificateErrorCode:(int)a0 host:(id)a1;
- (BOOL)requiresEASVersionInformaton;
- (BOOL)shouldHandlePasswordErrors;
- (BOOL)shouldLogIncomingData;
- (BOOL)shouldStallAfterConnectionLost;

@end

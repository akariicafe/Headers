@class NSString, AKDevice, AKAnisetteProvisioningController, AKAnisetteData, NSLock;
@protocol AKAnisetteServiceProtocol;

@interface AKAppleIDSession : NSObject <NSURLSessionAppleIDContext> {
    NSString *_serviceID;
    AKAnisetteProvisioningController *_nativeAnisetteController;
    AKAnisetteProvisioningController *_pairedDeviceAnisetteController;
    AKAnisetteData *_proxiedAnisetteData;
    NSLock *_anisetteControllerLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AKDevice *pairedDevice;
@property (retain, nonatomic) id<AKAnisetteServiceProtocol> anisetteDataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void)_generateAppleIDHeadersForSessionTask:(id)a0 withCompletion:(id /* block */)a1;
- (id)init;
- (id)relevantHTTPStatusCodes;
- (id)_nativeAnisetteController;
- (void)_handleAnissetteURLResponse:(id)a0 forRequest:(id)a1 withCompletion:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (BOOL)shouldDenyRequestForURL:(id)a0 task:(id)a1;
- (id)_pairedDeviceAnisetteController;
- (void)handleResponse:(id)a0 forRequest:(id)a1 shouldRetry:(BOOL *)a2;
- (void)_handleURLSwitchingResponse:(id)a0 forRequest:(id)a1 withCompletion:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 getAppleIDRequestOrHeadersForResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 getAppleIDHeadersForResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)appleIDHeadersForRequest:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_genericAppleIDHeadersDictionaryForRequest:(id)a0;
- (id)_generateAppleIDHeadersForRequest:(id)a0 error:(id *)a1;

@end

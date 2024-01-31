@class NSURL, AVAssetResourceLoadingRequest;

@interface SUPastisOperation : ISOperation

@property (retain, nonatomic) AVAssetResourceLoadingRequest *loadingRequest;
@property (retain, nonatomic) NSURL *keyURL;
@property (retain, nonatomic) NSURL *certificateURL;

- (void)run;
- (void)dealloc;
- (id)_getAppCertWithError:(id *)a0;
- (id)_getCKCForSPC:(id)a0 URI:(id)a1 error:(id *)a2;
- (id)_getURIWithError:(id *)a0;

@end

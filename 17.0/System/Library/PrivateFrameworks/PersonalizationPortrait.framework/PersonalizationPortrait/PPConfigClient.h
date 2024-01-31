@class PPXPCClientHelper;

@interface PPConfigClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (unsigned long long)assetVersionWithError:(id *)a0;
- (id)readableTrialTreatmentsMappingWithError:(id *)a0;
- (id)variantNameWithError:(id *)a0;

@end

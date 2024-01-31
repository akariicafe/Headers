@class NSBundle, NSMutableArray;

@interface CDMCATIProtoService : CDMDAGBaseService {
    NSBundle *_catiBundle;
    NSMutableArray *_childServices;
    long long _assetVersion;
}

+ (BOOL)isEnabled;
+ (id)getAssetFolderNamesByTrialFactorNames;

- (void).cxx_destruct;
- (long long)getServiceState;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (id)getChildServices;
- (id)handleRequestCommandTypeNames;
- (id)setupErrorResponse:(id)a0 serviceState:(long long)a1;

@end

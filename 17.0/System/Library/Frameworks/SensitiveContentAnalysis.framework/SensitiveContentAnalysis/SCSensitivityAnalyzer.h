@class NSObject, SCMediaAnalysisService;
@protocol OS_dispatch_queue;

@interface SCSensitivityAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) SCMediaAnalysisService *madService;
@property (readonly) long long analysisPolicy;

+ (BOOL)_isSensitiveContentWarningEnabledForApplication:(id)a0 scanningPolicy:(id)a1;
+ (long long)_analysisPolicyFrom:(id)a0;
+ (BOOL)_isCommunicationSafetyEnabled:(id)a0;
+ (BOOL)_isSensitiveContentWarningEnabled:(id)a0;
+ (BOOL)_isSensitiveContentWarningEnabledForAnyOfServices:(id)a0 scanningPolicy:(id)a1;
+ (BOOL)_isSensitiveContentWarningEnabledForService:(id)a0 scanningPolicy:(id)a1;
+ (long long)analysisFeatureEnablement;
+ (Class)entitlementsReaderClass;
+ (BOOL)isSensitiveContentWarningEnabledForAnyOfServices:(id)a0;
+ (BOOL)isSensitiveContentWarningEnabledForService:(id)a0;
+ (Class)settingsReaderClass;
+ (id)subscribeForAnalysisAvailabilityChanges:(id /* block */)a0;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)analyzeImageFile:(id)a0 completionHandler:(id /* block */)a1;
- (void)analyzeVideoFile:(id)a0 useBlastdoor:(BOOL)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)analyzeImageWithLocalIdentifier:(id)a0 fromPhotoLibraryWithURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)analyzeVideoWithLocalIdentifier:(id)a0 fromPhotoLibraryWithURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (long long)_mapMOScanningPolicyEnumValue:(id)a0;
- (void)_runBlockOnDispatchQueueIfSet:(id /* block */)a0;
- (void)analyzeCGImage:(struct CGImage { } *)a0 completionHandler:(id /* block */)a1;
- (void)analyzeCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (id)analyzeVideoFile:(id)a0 completionHandler:(id /* block */)a1;
- (void)analyzeVideoFile:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)initWithQueue:(id)a0 madService:(id)a1;

@end

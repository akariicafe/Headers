@class NSObject, SCSensitivityAnalyzer, SCMediaAnalysisService;
@protocol OS_dispatch_queue;

@interface USSensitivityAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SCSensitivityAnalyzer *_scsAnalyzer;
}

@property (retain, nonatomic) SCMediaAnalysisService *madService;

+ (BOOL)isCommunicationSafetyEnabled;
+ (BOOL)isNudityDetectionEnabled;
+ (BOOL)isNudityDetectionEnabledForService:(id)a0;
+ (id)subscribeForAnalysisEnabledChanges:(id /* block */)a0;
+ (BOOL)isAnalysisEnabled;
+ (BOOL)_isCommunicationSafetyEnabled:(id)a0;
+ (Class)entitlementsReaderClass;
+ (Class)settingsReaderClass;
+ (BOOL)_isAnalysisEnabled:(id)a0;
+ (BOOL)_isNudityDetectionEnabled:(id)a0;
+ (BOOL)_isNudityDetectionEnabledForAnyOfServices:(id)a0 scanningPolicy:(id)a1;
+ (BOOL)_isNudityDetectionEnabledForApplication:(id)a0 scanningPolicy:(id)a1;
+ (BOOL)_isNudityDetectionEnabledForService:(id)a0 scanningPolicy:(id)a1;
+ (BOOL)isNudityDetectionEnabledForAnyOfServices:(id)a0;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)analyzeCGImage:(struct CGImage { } *)a0 withOrientation:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)analyzeImageFile:(id)a0 completionHandler:(id /* block */)a1;
- (void)analyzeVideoFile:(id)a0 useBlastdoor:(BOOL)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)analyzeImageWithLocalIdentifier:(id)a0 fromPhotoLibraryWithURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)analyzeVideoWithLocalIdentifier:(id)a0 fromPhotoLibraryWithURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)analyzeVideoFile:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)initWithQueue:(id)a0 madService:(id)a1;

@end

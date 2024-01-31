@class PHAsset, PHSuggestion;

@interface PUWallpaperRadarAttachmentProvider : NSObject <PXTapToRadarDiagnosticProvider>

@property (retain, nonatomic) PHSuggestion *suggestion;
@property (retain, nonatomic) PHAsset *asset;

+ (id)generateDebugDescriptionForSuggestion:(id)a0;
+ (id)radarConfigurationForAsset:(id)a0 suggestion:(id)a1 compoundLayerStack:(id)a2 segmentationItem:(id)a3 posterDescriptor:(id)a4 posterConfiguration:(id)a5 component:(long long)a6 completionHandler:(id /* block */)a7;

- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuggestion:(id)a0 asset:(id)a1;

@end

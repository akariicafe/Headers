@class NSString;

@interface PXSystemMediaAnalyzer : NSObject <PXMediaAnalyzer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestMatchedTimeRangesForAsset:(id)a0 personLocalIdentifiers:(id)a1 sceneIdentifiers:(id)a2 audioIdentifiers:(id)a3 humanActionIdentifiers:(id)a4 resultHandler:(id /* block */)a5;
- (id)requestAnalysisForAssets:(id)a0 options:(unsigned long long)a1 resultHandler:(id /* block */)a2;

@end

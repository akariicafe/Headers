@class NSArray;

@interface PHMediaFormatAssetBundleConversionRequest : PHMediaFormatConversionCompositeRequest

@property (retain) NSArray *subrequests;

- (id)outputFileType;
- (void).cxx_destruct;
- (BOOL)prepareWithError:(id *)a0;
- (id)outputPathExtension;
- (void)enqueueSubrequestsOnConversionManager:(id)a0;
- (void)enumerateSubrequests:(id /* block */)a0;
- (void)postProcessSuccessfulCompositeRequest;
- (BOOL)requiresFormatConversion;
- (BOOL)requiresMetadataChanges;

@end

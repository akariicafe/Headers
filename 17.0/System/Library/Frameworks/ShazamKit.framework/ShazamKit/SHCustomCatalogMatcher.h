@class MRE, SHCustomCatalog, NSString, SHCustomCatalogMatcherResultBuilder;
@protocol SHMatcherDelegate;

@interface SHCustomCatalogMatcher : NSObject <SHMatcher>

@property (retain, nonatomic) MRE *mre;
@property (readonly, nonatomic) SHCustomCatalog *customCatalog;
@property (readonly, nonatomic) SHCustomCatalogMatcherResultBuilder *matchResultBuilder;
@property (weak, nonatomic) id<SHMatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)MRESignaturesFromMatches:(id)a0;
- (void)stopRecognition;
- (long long)algorithmToMREAlgorithm:(long long)a0;
- (id)bestMatchFromMatchedResults:(id)a0;
- (void)buildMRE;
- (id)initWithCustomCatalog:(id)a0;
- (id)matchLongSignature:(id)a0;
- (id)matchShortSignature:(id)a0;
- (id)matcherResponseFrom:(id)a0 signatureAlignments:(id)a1 querySignature:(id)a2 error:(id)a3;
- (void)startRecognitionForRequest:(id)a0;
- (void)stopRecognitionForRequestID:(id)a0;
- (long long)storeDensityToMREDensity:(long long)a0;
- (id)stringIDFromTrackID:(unsigned long long)a0;
- (BOOL)supportsTrackingOnSignature:(id)a0;

@end

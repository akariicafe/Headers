@interface PGMomentIngestCLIPFeatureVectorExtractor : NSObject {
    void /* unknown type, empty encoding */ ingestMomentContainer;
}

+ (id)decodeEncodedCLIPFeatureVector:(id)a0 withError:(id *)a1;
+ (id)encodeCLIPFeatureVector:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)extractCLIPFeatureVectorWithError:(id *)a0;
- (id)initWithIngestMomentContainer:(id)a0;

@end

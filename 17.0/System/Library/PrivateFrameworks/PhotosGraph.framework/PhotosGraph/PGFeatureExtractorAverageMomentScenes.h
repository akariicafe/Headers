@class NSString, NSArray;

@interface PGFeatureExtractorAverageMomentScenes : PGFeatureExtractor {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ sceneNodes;
    void /* unknown type, empty encoding */ featureIndexByLowercasedScene;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *featureNames;
@property (nonatomic, readonly) long long featureLength;

- (id)init;
- (void).cxx_destruct;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end

@class HKMedicationsTextNDCParser;

@interface HKMedicationsImageFeatureExtractor : NSObject

@property (retain, nonatomic) HKMedicationsTextNDCParser *ndcParser;

- (id)init;
- (void).cxx_destruct;
- (void)extractFeaturesFrom:(id)a0 completionHandler:(id /* block */)a1;

@end

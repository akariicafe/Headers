@class NSMutableDictionary, NSDate;

@interface RTPlaceInferenceMetrics : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)init;
- (void)setPlaceInferenceOptions:(id)a0;
- (void)setPlaceInferences:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)submitMetrics;
- (double)entropyOfConflictFromTopResults:(id)a0;
- (id)initWithClientIdentifier:(id)a0 placeInferenceOptions:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (void)setTopPersonalizedLabelsInferredMapItems:(id)a0 topBluePOIInferredMapItem:(id)a1;
- (void)setTopPlaceInference:(id)a0;
- (id)objectForKey:(id)a0;

@end

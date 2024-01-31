@class NSDictionary;

@interface FCNewsPersonalizationTrainingBiases : NSObject

@property (retain, nonatomic) NSDictionary *biases;

+ (id)identifiersForEventType:(id)a0 feedType:(id)a1 groupType:(id)a2;

- (id)description;
- (double)biasForEventType:(id)a0 feedType:(id)a1 groupType:(id)a2;
- (void).cxx_destruct;
- (id)initWithBiases:(id)a0;

@end

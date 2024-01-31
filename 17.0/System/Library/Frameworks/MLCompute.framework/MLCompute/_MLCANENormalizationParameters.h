@class NSDictionary, NSArray;

@interface _MLCANENormalizationParameters : NSObject

@property (readonly, retain, nonatomic) NSDictionary *normalizationParams;
@property (readonly, retain, nonatomic) NSDictionary *gocParams;
@property (readonly, retain, nonatomic) NSArray *neuronParams;

+ (id)normalizationUnitParametersWith:(id)a0 gocParams:(id)a1 neuronParams:(id)a2;

- (void).cxx_destruct;
- (id)initWithNormalizationParams:(id)a0 gocParams:(id)a1 neuronParams:(id)a2;

@end

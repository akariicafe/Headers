@interface DRSSamplingParameters : NSObject <DRJSONRepresentable>

@property (readonly, nonatomic) double samplingPercentage;

- (id)description;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictRepresentation;
- (id)initWithJSONDict:(id)a0;
- (id)initWithSamplingPercentage:(double)a0;
- (BOOL)isEqualToSamplingParameters:(id)a0;

@end

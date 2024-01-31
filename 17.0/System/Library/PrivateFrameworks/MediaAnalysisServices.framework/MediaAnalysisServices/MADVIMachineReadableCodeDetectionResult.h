@class NSArray;

@interface MADVIMachineReadableCodeDetectionResult : MADResult

@property (readonly) unsigned long long executionNanoseconds;
@property (readonly) double executionTimeInterval;
@property (readonly, nonatomic) NSArray *resultItems;
@property (readonly, nonatomic) NSArray *observations;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithObservations:(id)a0;

@end

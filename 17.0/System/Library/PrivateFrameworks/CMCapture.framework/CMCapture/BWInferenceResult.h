@class NSDictionary, NSString;

@interface BWInferenceResult : NSObject

@property (readonly, nonatomic) int inferenceType;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;
@property (readonly, copy, nonatomic) NSDictionary *inferences;
@property (readonly, copy, nonatomic) NSString *preventionReason;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)dealloc;
- (id)initWithInferenceType:(int)a0 preventionReason:(id)a1 atTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)description;
- (id)initWithResult:(id)a0 replacementInferences:(id)a1 replacementPreventionReason:(id)a2;
- (id)initWithInferenceType:(int)a0 inferences:(id)a1 atTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end

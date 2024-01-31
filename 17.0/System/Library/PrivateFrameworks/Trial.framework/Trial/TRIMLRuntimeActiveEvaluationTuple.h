@class TRIFactorsState, TRIMLRuntimeEvaluation;

@interface TRIMLRuntimeActiveEvaluationTuple : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIMLRuntimeEvaluation *eval;
@property (readonly, nonatomic) TRIFactorsState *factorsState;

+ (id)tupleWithEval:(id)a0 factorsState:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToTuple:(id)a0;
- (id)copyWithReplacementEval:(id)a0;
- (id)copyWithReplacementFactorsState:(id)a0;
- (id)initWithEval:(id)a0 factorsState:(id)a1;

@end

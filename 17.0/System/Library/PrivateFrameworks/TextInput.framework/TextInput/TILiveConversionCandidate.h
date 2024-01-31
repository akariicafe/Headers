@class NSString;

@interface TILiveConversionCandidate : TIMecabraCandidate {
    NSString *_candidate;
}

@property (nonatomic, getter=isInlineCandidate) BOOL inlineCandidate;
@property (nonatomic, getter=isPartialCandidate) BOOL partialCandidate;

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)label;
- (id)candidate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (id)initWithSurface:(id)a0 input:(id)a1 candidate:(id)a2 mecabraCandidatePointerValue:(id)a3;

@end

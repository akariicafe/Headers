@class NSString;

@interface TILabeledKeyboardCandidate : TIKeyboardCandidateSingle {
    long long _transliterationType;
    BOOL _transliterationCandidate;
}

@property (copy, nonatomic) NSString *label;

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 label:(id)a2;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 label:(id)a2 transliterationType:(long long)a3;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (BOOL)isTransliterationCandidate;

@end

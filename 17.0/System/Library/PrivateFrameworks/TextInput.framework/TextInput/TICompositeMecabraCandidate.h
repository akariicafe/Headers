@class NSString, NSArray;

@interface TICompositeMecabraCandidate : TIMecabraCandidate

@property (copy, nonatomic) NSString *remainderCandidateString;
@property (copy, nonatomic) NSArray *autoconvertedCandidatePointerValues;

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (void)encodeWithCoder:(id)a0;
- (id)label;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidateResultSetCoder:(id)a0;

@end

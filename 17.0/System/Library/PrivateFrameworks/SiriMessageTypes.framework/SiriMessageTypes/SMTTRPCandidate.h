@class NSString, NSArray;

@interface SMTTRPCandidate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *trpCandidateId;
@property (readonly, copy, nonatomic) NSString *requestId;
@property (readonly, copy, nonatomic) NSArray *tcuList;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTrpCandidateId:(id)a0 tcuList:(id)a1;
- (id)initWithTrpCandidateId:(id)a0 requestId:(id)a1 tcuList:(id)a2;

@end

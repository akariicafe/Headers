@class IRCandidateResult, NSMutableDictionary, IRCandidateDO, IRInspectionOrderOfExectionForCandidate, NSNumber, NSString;

@interface IRCandidateWrapper : NSObject

@property (retain, nonatomic) IRCandidateResult *candidateResult;
@property (retain, nonatomic) NSMutableDictionary *ruleInspections;
@property (retain, nonatomic) NSMutableDictionary *internalOrderOfExecution;
@property (nonatomic) BOOL enableOrderOfExecutionLogging;
@property (retain, nonatomic) IRCandidateDO *candidate;
@property (readonly, nonatomic) IRInspectionOrderOfExectionForCandidate *orderOfExecution;
@property (nonatomic) BOOL sameSpaceBasedOnMiLo;
@property (nonatomic) BOOL sameSpaceBasedOnUWB;
@property (nonatomic) BOOL sameSpaceBasedOnBLE;
@property (retain, nonatomic) NSNumber *uwbRange;
@property (retain, nonatomic) NSNumber *bleRange;
@property (nonatomic) long long nominatedClassification;
@property (retain, nonatomic) NSString *nominatedClassificationDesc;

- (void).cxx_destruct;
- (id)initWithCandidate:(id)a0;
- (void)setClassification:(long long)a0 withDescription:(id)a1;
- (id)initWithCandidate:(id)a0 andDefaultClassification:(long long)a1 logOrderOfExecution:(BOOL)a2;
- (void)logOrderOfExecution:(long long)a0 withRuleKey:(id)a1 ruleType:(id)a2;
- (BOOL)logOrderOfExecution:(long long)a0 withRuleKey:(id)a1 ruleType:(id)a2 andReturn:(BOOL)a3;
- (void)setEvaluation:(id)a0 forRuleKey:(id)a1;

@end

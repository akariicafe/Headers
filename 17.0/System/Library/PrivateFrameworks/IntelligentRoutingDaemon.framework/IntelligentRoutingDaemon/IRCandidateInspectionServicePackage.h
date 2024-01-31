@class IRCandidate, NSArray, IRInspectionOrderOfExectionForCandidate, NSString;

@interface IRCandidateInspectionServicePackage : NSObject

@property (readonly, nonatomic) IRCandidate *candidate;
@property (readonly, nonatomic) NSArray *rules;
@property (readonly, nonatomic) long long classification;
@property (readonly, nonatomic) IRInspectionOrderOfExectionForCandidate *orderOfExecution;
@property (readonly, nonatomic) NSString *classificationDescription;

- (void).cxx_destruct;
- (id)exportCandidateInspectionAsDictionary;
- (id)initWithRules:(id)a0 classification:(long long)a1 orderOfExecution:(id)a2 andClassificationDescription:(id)a3 forCandidate:(id)a4;

@end

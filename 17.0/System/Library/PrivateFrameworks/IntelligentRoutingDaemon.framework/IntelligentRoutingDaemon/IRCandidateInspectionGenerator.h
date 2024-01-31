@class NSDictionary, NSString, IRCandidate;

@interface IRCandidateInspectionGenerator : NSObject

@property (nonatomic) BOOL sameSpaceBasedOnMiLo;
@property (nonatomic) BOOL sameSpaceBasedOnUWB;
@property (nonatomic) BOOL sameSpaceBasedOnBLE;
@property (readonly, nonatomic) NSDictionary *candidateSelectorReasons;
@property (readonly, nonatomic) IRCandidate *candidate;
@property (readonly, nonatomic) long long classification;
@property (readonly, nonatomic) NSString *classificationDescription;

- (void).cxx_destruct;
- (id)exportCandidateInspectionAsDictionary;
- (id)initClassification:(long long)a0 andClassificationDescription:(id)a1 forCandidate:(id)a2;
- (id)initWithClassification:(long long)a0 ClassificationDescription:(id)a1 sameSpaceBasedOnMiLo:(BOOL)a2 sameSpaceBasedOnUWB:(BOOL)a3 sameSpaceBasedOnBLE:(BOOL)a4 candidateSelectorReasons:(id)a5 forCandidate:(id)a6;

@end

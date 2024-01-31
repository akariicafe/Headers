@class NSSet, NSDictionary, NSString, NSMutableSet;

@interface IRPolicyInspection : NSObject {
    NSMutableSet *_internalCandidates;
}

@property (readonly, nonatomic) NSSet *candidates;
@property (retain, nonatomic) NSDictionary *generatorNegativeInputs;
@property (nonatomic) long long stateMachineClassification;
@property (readonly, nonatomic) NSString *name;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)addCandidate:(id)a0;

@end

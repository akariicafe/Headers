@class NSSet, IRContext, IRPolicyInspection, NSString;

@interface IRContextWrapper : NSObject {
    long long _defaultClassification;
    NSString *_name;
}

@property (readonly, nonatomic) NSSet *candidates;
@property (readonly, copy, nonatomic) IRContext *context;
@property (readonly, copy, nonatomic) IRPolicyInspection *policyInspection;

- (void).cxx_destruct;
- (void)addCandidate:(id)a0 logOrderOfExecution:(BOOL)a1;
- (id)initWithName:(id)a0 andDefaultClassification:(long long)a1 andCandidates:(id)a2;
- (id)initWithName:(id)a0 defaultClassification:(long long)a1;

@end

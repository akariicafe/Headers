@class NSString, UPResultRootNode, NSArray, UPModelIdentifier, NSDictionary, NSObject, SIRINLUEXTERNALUserParse, NSNumber, UPUsoSerializer;
@protocol SIRINLUUserDialogAct;

@interface UPResultCandidate : NSObject

@property (readonly) NSDictionary *_candidateEntitiesByStartIndex;
@property (readonly) NSString *utterance;
@property (readonly) NSString *intent;
@property (readonly) UPResultRootNode *rootNodeRepresentation;
@property (readonly) UPUsoSerializer *usoSerializer;
@property (readonly, nonatomic) UPModelIdentifier *modelIdentifier;
@property (readonly, copy) NSObject<SIRINLUUserDialogAct> *task;
@property (readonly) double uncalibratedProbability;
@property (readonly) NSNumber *calibratedProbability;
@property (readonly) double probability;
@property (readonly, copy) NSString *annotatedString;
@property (readonly) NSArray *entities;
@property (readonly, nonatomic) SIRINLUEXTERNALUserParse *protobufRepresentation;
@property (readonly, nonatomic) double bestAvailableProbability;

+ (id)_buildCandidateEntitiesByStartIndex:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_intermediateNodeRepresentations:(id)a0;
- (id)initWithUncalibratedProbability:(double)a0 calibratedProbability:(id)a1 utterance:(id)a2 intent:(id)a3 entities:(id)a4 modelIdentifier:(id)a5 task:(id)a6;

@end

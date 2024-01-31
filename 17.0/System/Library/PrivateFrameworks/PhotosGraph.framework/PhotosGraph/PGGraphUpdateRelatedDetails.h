@class NSSet, NSMutableSet;

@interface PGGraphUpdateRelatedDetails : NSObject

@property (retain, nonatomic) NSMutableSet *accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
@property (retain, nonatomic) NSMutableSet *accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;
@property (retain, nonatomic) NSMutableSet *accumulatedIdentifiersForMemoryNodesRelatedToDeletedMoments;
@property (readonly, nonatomic) NSSet *identifiersForMomentRelatedToUpdatedPersons;
@property (readonly, nonatomic) NSSet *identifiersForMomentRelatedToDeletedPersons;
@property (readonly, nonatomic) NSSet *identifiersForMemoriesRelatedToDeletedMoments;

- (id)init;
- (void).cxx_destruct;
- (void)_accumulateMomentIdentifiersInto:(id)a0 forPersonNodes:(id)a1;
- (id)_momentNodesFromPersonNodes:(id)a0;
- (void)accumulateDetailsForDeletedMomentNodes:(id)a0;
- (void)accumulateDetailsForDeletedPersonNodes:(id)a0;
- (void)accumulateDetailsForUpdatedPersonNode:(id)a0 personChange:(id)a1;

@end

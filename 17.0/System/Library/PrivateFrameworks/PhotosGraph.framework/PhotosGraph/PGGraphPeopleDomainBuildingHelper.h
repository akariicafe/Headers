@class NSMutableDictionary;

@interface PGGraphPeopleDomainBuildingHelper : NSObject {
    NSMutableDictionary *_insertedIdentifiedPersonByPersonLocalIdentifier;
    NSMutableDictionary *_authorNodeByLocalIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (void)cacheAuthorNode:(id)a0 forShareParticipant:(id)a1;
- (id)cachedAuthorNodeForShareParticipant:(id)a0;
- (id)insertIdentifiedPersonWithPersonNode:(id)a0 forPersonLocalIdentifier:(id)a1;
- (id)insertedIdentifiedPersonForPersonLocalIdentifier:(id)a0;

@end

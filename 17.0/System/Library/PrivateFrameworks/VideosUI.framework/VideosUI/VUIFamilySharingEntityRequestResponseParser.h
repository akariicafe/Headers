@interface VUIFamilySharingEntityRequestResponseParser : NSObject

- (id)init;
- (id)_parseContentRatingBag:(id)a0;
- (id)_parsePlaybackPositionBag:(id)a0;
- (id)_parseRelationship:(id)a0;
- (id)_parseRelationshipBag:(id)a0;
- (id)_processRawMediaEntities:(id)a0;
- (id)parseAMSURLResult:(id)a0;

@end

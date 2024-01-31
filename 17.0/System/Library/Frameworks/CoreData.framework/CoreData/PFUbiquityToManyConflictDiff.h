@class NSString, NSMutableSet;

@interface PFUbiquityToManyConflictDiff : NSObject {
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSString *_relationshipKey;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initForRelationshipAtKey:(id)a0;

@end

@interface PFMirroredRelationship : NSObject

+ (BOOL)isValidMirroredRelationshipRecord:(id)a0 values:(id)a1;

- (BOOL)updateRelationshipValueUsingImportContext:(id)a0 andManagedObjectContext:(id)a1 error:(id *)a2;

@end

@interface AVTAvatarManagedRecordTransformer : NSObject <AVTAvatarManagedRecordTransformer>

- (void)updateManagedRecord:(id)a0 withRecord:(id)a1;
- (id)identifierForManagedRecordIdentifier:(id)a0;
- (id)managedRecordIdentifierForIdentifier:(id)a0;
- (id)recordWithManagedRecord:(id)a0 error:(id *)a1;

@end

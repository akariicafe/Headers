@interface HMBModelFieldOption : HMFObject

+ (id)encryptedExternalRecordField:(id)a0;
+ (id)excludeFromCloudStorage;
+ (id)queryableFieldWithEncodeBlock:(id /* block */)a0 decodeBlock:(id /* block */)a1 descriptionBlock:(id /* block */)a2;
+ (id)externalRecordField:(id)a0;
+ (id)queryableFieldWithEncodeBlock:(id /* block */)a0 decodeBlock:(id /* block */)a1;
+ (id)queryableField;

- (void)applyTo:(id)a0;

@end

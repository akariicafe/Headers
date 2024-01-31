@class NSCKRecordMetadata, NSManagedObject;

@interface _PFCKInsertedMetadataLink : NSObject {
    NSCKRecordMetadata *_recordMetadata;
    NSManagedObject *_insertedObject;
}

- (void)dealloc;
- (id)description;

@end

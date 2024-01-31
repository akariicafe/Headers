@class NSManagedObjectContext, NSManagedObjectID;

@interface _NSManagedObject_st : NSObject {
    int _cd_rc;
    unsigned int _cd_lockingInfo;
    unsigned int _cd_stateFlags;
    unsigned int _cd_extraFlags;
    id _cd_rawData;
    NSManagedObjectContext *_cd_managedObjectContext;
    NSManagedObjectID *_cd_objectID;
    void *_cd_extras;
    id _cd_queueReference;
}

@end

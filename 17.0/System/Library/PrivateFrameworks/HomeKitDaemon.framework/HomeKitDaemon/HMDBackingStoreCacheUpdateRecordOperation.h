@class NSString, HMDBackingStoreModelObject, NSData, CKRecord, HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheUpdateRecordOperation : HMDBackingStoreOperation

@property (readonly) HMDBackingStoreCacheGroup *group;
@property (readonly) NSString *recordName;
@property (readonly) CKRecord *record;
@property (readonly) NSData *data;
@property (readonly) HMDBackingStoreModelObject *model;
@property (readonly) unsigned long long encoding;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 name:(id)a1 model:(id)a2 resultBlock:(id /* block */)a3;
- (id)initWithGroup:(id)a0 name:(id)a1 record:(id)a2 data:(id)a3 encoding:(unsigned long long)a4 model:(id)a5 resultBlock:(id /* block */)a6;
- (id)initWithGroup:(id)a0 record:(id)a1 data:(id)a2 encoding:(unsigned long long)a3 resultBlock:(id /* block */)a4;
- (id)initWithGroup:(id)a0 record:(id)a1 resultBlock:(id /* block */)a2;
- (id)mainReturningError;

@end

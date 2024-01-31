@class NSString, NSData;

@interface BookDataStore.CRDTModelSyncEntity : BCCloudData <BCCloudData> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_logger;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSData *protoData;

+ (id)propertyIDKey;

- (id)zoneName;
- (id)recordType;
- (id)mutableCopy;
- (id)identifier;
- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void).cxx_destruct;
- (void)configureFromCloudData:(id)a0 withMergers:(id)a1;
- (BOOL)isEqualExceptForDate:(id)a0 ignoringEmptySalt:(BOOL)a1;
- (void)resolveConflictsFromRecord:(id)a0 withResolvers:(id)a1;

@end

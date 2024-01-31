@class NSString, NSData, NSDate, CKRecord;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableCollectionDetail : BCMutableCloudData <BCCollectionDetail, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *collectionID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *collectionDescription;
@property (nonatomic) BOOL hidden;
@property (nonatomic) int sortOrder;
@property (nonatomic) int sortMode;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) long long editGeneration;
@property (readonly, nonatomic) long long syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (weak, nonatomic) id<BCCloudDataPrivacyDelegate> privacyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoneName;
- (id)recordType;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithRecord:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)configuredRecordFromAttributes;
- (id)initWithCloudData:(id)a0;
- (id)initWithCollectionID:(id)a0;

@end

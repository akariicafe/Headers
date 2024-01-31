@class NSString, NSData, NSDate, CKRecord;
@protocol BCCloudDataPrivacyDelegate;

@interface BCCollectionMember : BCCloudData <BCCollectionMember>

@property (copy, nonatomic) NSString *collectionMemberID;
@property (nonatomic) int sortOrder;
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

+ (id)assetIDFromCollectionMemberID:(id)a0;
+ (id)collectionIDFromCollectionMemberID:(id)a0;
+ (id)collectionMemberIDWithCollectionID:(id)a0 assetID:(id)a1;
+ (id)propertyIDKey;

- (id)zoneName;
- (id)recordType;
- (id)mutableCopy;
- (id)identifier;
- (void)_configureFromCollectionMember:(id)a0 withMergers:(id)a1;
- (void)configureFromCloudData:(id)a0 withMergers:(id)a1;
- (BOOL)isEqualExceptForDate:(id)a0 ignoringEmptySalt:(BOOL)a1;
- (void)resolveConflictsFromRecord:(id)a0 withResolvers:(id)a1;

@end

@class NSString, NSData, NSDate, CKRecord;
@protocol BCCloudDataPrivacyDelegate;

@interface BCAssetReview : BCCloudData <BCAssetReview>

@property (copy, nonatomic) NSString *assetReviewID;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) short starRating;
@property (nonatomic) double normalizedStarRating;
@property (copy, nonatomic) NSString *reviewTitle;
@property (copy, nonatomic) NSString *reviewBody;
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

+ (id)assetIDFromAssetReviewID:(id)a0;
+ (id)assetReviewIDWithUserID:(id)a0 assetID:(id)a1;
+ (id)propertyIDKey;
+ (id)userIDFromAssetReviewID:(id)a0;

- (id)zoneName;
- (id)recordType;
- (id)mutableCopy;
- (id)identifier;
- (void)_configureFromAssetReview:(id)a0 withMergers:(id)a1;
- (void)configureFromCloudData:(id)a0 withMergers:(id)a1;
- (BOOL)isEqualExceptForDate:(id)a0 ignoringEmptySalt:(BOOL)a1;
- (void)resolveConflictsFromRecord:(id)a0 withResolvers:(id)a1;

@end

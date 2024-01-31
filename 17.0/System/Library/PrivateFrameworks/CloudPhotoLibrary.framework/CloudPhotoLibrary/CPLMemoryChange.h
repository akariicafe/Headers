@class NSString, NSData, NSDate, CPLMemoryAssetList;

@interface CPLMemoryChange : CPLRecordChange

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) long long category;
@property (nonatomic) long long subcategory;
@property (copy, nonatomic) CPLMemoryAssetList *assetList;
@property (copy, nonatomic) CPLMemoryAssetList *customUserAssetList;
@property (copy, nonatomic) NSData *assetListPredicate;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSData *graphData;
@property (nonatomic) long long graphVersion;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (nonatomic, getter=isRejected) BOOL rejected;
@property (nonatomic) long long userActionOptions;
@property (copy, nonatomic) NSData *movieData;
@property (nonatomic) double score;
@property (nonatomic) long long notificationState;
@property (copy, nonatomic) NSData *blacklistedFeature;
@property (nonatomic) long long playCount;
@property (nonatomic) long long shareCount;
@property (nonatomic) long long viewCount;

+ (BOOL)supportsDeletion;
+ (BOOL)supportsSecureCoding;
+ (id)_createTestMemoryWithAssets:(id)a0;
+ (BOOL)supportsDirectDeletion;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)a0;
- (id)propertiesDescription;
- (id)scopedIdentifiersForMapping;
- (id)translateToClientChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)translateToCloudChangeUsingIDMapping:(id)a0 error:(id *)a1;

@end

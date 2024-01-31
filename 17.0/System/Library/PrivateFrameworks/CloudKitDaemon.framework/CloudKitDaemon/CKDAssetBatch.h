@class CKDAssetTokenRequest, NSArray, NSDictionary, NSData, CKDAssetZone;

@interface CKDAssetBatch : NSObject

@property (readonly, nonatomic) NSArray *assetRecords;
@property (readonly, nonatomic) CKDAssetZone *assetZone;
@property (retain, nonatomic) NSData *authPutRequest;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSDictionary *authPutResponseHeaders;
@property (nonatomic) BOOL isFailed;
@property (weak, nonatomic) CKDAssetTokenRequest *assetTokenRequest;
@property (readonly) unsigned int sizeUpperBound;
@property (readonly) unsigned int size;
@property (readonly, nonatomic) NSArray *allMMCSItems;
@property (readonly, nonatomic) NSArray *allMMCSSectionItems;
@property (readonly, nonatomic) NSArray *allRereferenceMMCSItems;
@property (nonatomic) BOOL useMMCSEncryptionV2;
@property (readonly, nonatomic) NSArray *allRegularAndSectionAndRereferenceItems;

- (BOOL)isRereferenceAssetBatch;
- (id)allMMCSAndSectionItems;
- (id)initWithAssetZone:(id)a0;
- (BOOL)isEmptyOfRereferencesAssets;
- (id)CKPropertiesDescription;
- (id)description;
- (void)addAssetRecord:(id)a0;
- (void)failIfNotDoneAllRegularAndSectionAndRereferenceItemsWithError:(id)a0;
- (id)firstMMCSItemError;
- (BOOL)isEmptyOfAssets;
- (void).cxx_destruct;
- (BOOL)isPackageSectionBatch;

@end

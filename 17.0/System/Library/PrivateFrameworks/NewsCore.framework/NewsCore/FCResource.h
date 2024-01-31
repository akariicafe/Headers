@class NSDate, NSString, FCContentArchive, NSURL, FCInterestToken, NTPBResourceRecord, FCAssetHandle;

@interface FCResource : NSObject <FCContentArchivable>

@property (retain, nonatomic) NTPBResourceRecord *resourceRecord;
@property (retain, nonatomic) FCInterestToken *interestToken;
@property (readonly, nonatomic) NSString *resourceID;
@property (readonly, nonatomic) FCAssetHandle *assetHandle;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic, getter=isOnDisk) BOOL onDisk;
@property (readonly, nonatomic) NSDate *fetchDate;
@property (readonly, nonatomic) FCContentArchive *contentArchive;

- (unsigned long long)hash;
- (id)initWithRecord:(id)a0 interestToken:(id)a1 assetManager:(id)a2;
- (void).cxx_destruct;
- (id)initWithResourceID:(id)a0 assetHandle:(id)a1 fetchDate:(id)a2;
- (id)initWithPermanentURLForResourceID:(id)a0 cacheLifetimeHint:(long long)a1 contentContext:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

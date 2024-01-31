@class NSString, NSData;

@interface CacheManagementAsset : NSObject

@property (readonly) unsigned int assetVersion;
@property double expiration_date;
@property double consumed_date;
@property double download_start_date;
@property double download_completion_date;
@property double last_viewed_date;
@property (retain) NSString *absolutePath;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *relativePath;
@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSData *metadata;
@property (retain, nonatomic) NSData *thumbnailData;
@property int priority;

+ (id)assetFromFile:(id)a0 withIdentifier:(id)a1;
+ (id)assetFromPath:(id)a0 withIdentifier:(id)a1;
+ (id)assetFromData:(id)a0;
+ (id)assetFromPath:(id)a0 withIdentifier:(id)a1 createIfAbsent:(BOOL)a2;
+ (id)assetWithRelativePath:(id)a0 identifier:(id)a1 expirationDate:(id)a2 contentType:(id)a3 metadata:(id)a4 priority:(int)a5;

- (void)commit;
- (void)setExpirationDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)size;
- (id)expirationDate;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)consumedDate;
- (id)downloadCompletionDate;
- (id)downloadStartDate;
- (id)lastViewedDate;
- (void)setConsumedDate:(id)a0;
- (void)setDownloadCompletionDate:(id)a0;
- (void)setDownloadStartDate:(id)a0;
- (void)setLastViewedDate:(id)a0;
- (id)fullPath;
- (struct { unsigned int x0; double x1; double x2; double x3; double x4; double x5; int x6; BOOL x7; long long x8; long long x9; long long x10; long long x11; long long x12; char x13[0]; } *)createFlattenedAsset:(long long *)a0;
- (id)initWithFlattenedAsset:(struct { unsigned int x0; double x1; double x2; double x3; double x4; double x5; int x6; BOOL x7; long long x8; long long x9; long long x10; long long x11; long long x12; char x13[0]; } *)a0;
- (id)initWithRelativePath:(id)a0 identifier:(id)a1 expirationDate:(id)a2 contentType:(id)a3 metadata:(id)a4 priority:(int)a5;
- (int)purgeabilityScoreAtUrgency:(int)a0;
- (long long)sizeCached:(BOOL)a0;

@end

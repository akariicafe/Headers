@class GEOTileKeyMap, NSString, GEOApplicationAuditToken, NSLocale, GEOResourceManifestConfiguration, GEOTileKeyList;

@interface GEOTileRequest : NSObject

@property (readonly, nonatomic) GEOTileKeyList *keyList;
@property (readonly, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) GEOTileKeyMap *cachedEtags;
@property (readonly, nonatomic) GEOTileKeyMap *cachedData;
@property (readonly, nonatomic) GEOTileKeyMap *priorities;
@property (readonly, nonatomic) GEOTileKeyMap *signpostIDs;
@property (readonly, nonatomic) GEOTileKeyMap *createTimes;
@property (readonly, nonatomic) GEOTileKeyMap *additionalInfos;
@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken;
@property (readonly, nonatomic) unsigned char loadReason;
@property (readonly, nonatomic) unsigned long long constraints;
@property (readonly, nonatomic) NSString *backgroundSessionIdentifier;
@property (readonly, nonatomic) BOOL shouldParticipateInBalancer;

- (id)init;
- (id)initWithKeyList:(id)a0 manifestConfiguration:(id)a1 locale:(id)a2 cachedEtags:(id)a3 cachedData:(id)a4 priorities:(id)a5 signpostIDs:(id)a6 createTimes:(id)a7 additionalInfos:(id)a8 auditToken:(id)a9 constraints:(unsigned long long)a10 backgroundSessionIdentifier:(id)a11 shouldParticipateInBalancer:(BOOL)a12 reason:(unsigned char)a13;
- (id)description;
- (void).cxx_destruct;
- (id)initWithKeyList:(id)a0 manifestConfiguration:(id)a1 locale:(id)a2;

@end

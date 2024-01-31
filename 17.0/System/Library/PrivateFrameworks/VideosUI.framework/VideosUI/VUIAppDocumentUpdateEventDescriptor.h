@interface VUIAppDocumentUpdateEventDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL animated;

+ (id)accountChanged;
+ (id)settings;
+ (id)entitlements;
+ (id)utsk;
+ (id)highlightsChanged;
+ (id)preferredVideoFormat;
+ (id)restrictions;
+ (id)favorites;
+ (id)purchases;
+ (id)playActivity;
+ (id)appDidBecomeActive;
+ (id)appRefresh;
+ (id)clearPlayHistory;
+ (id)deviceDiscoveryDataAvailable;
+ (id)favoritesSyncCompleted;
+ (id)groupRecoCollectionVisiblityChanged;
+ (id)groupRecoUsersChanged;
+ (id)locationAuthorizationChanged;
+ (id)locationRetrieved;
+ (id)playHistoryUpdated;
+ (id)postPlay;
+ (id)removeFromPlayHistory;
+ (id)upNext;
+ (id)upNextLockupArtSettingChanged;

- (id)init;
- (unsigned long long)hash;
- (id)initWithEventType:(unsigned long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

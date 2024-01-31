@class VUIAppDocumentUpdateEventDescriptor, NSDictionary;

@interface VUIAppDocumentUpdateEvent : NSObject <NSCopying>

@property (retain, nonatomic) VUIAppDocumentUpdateEventDescriptor *descriptor;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

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
+ (id)removeFromPlayHistory;
+ (id)upNextLockupArtSettingChanged;

- (id)initWithDescriptor:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)coalescedEvent:(id)a0;

@end

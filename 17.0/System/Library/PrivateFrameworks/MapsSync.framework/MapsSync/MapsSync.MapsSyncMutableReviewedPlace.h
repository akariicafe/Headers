@class _TtC8MapsSync27MapsSyncAnonymousCredential, NSDate, NSNumber, _TtC8MapsSync19MapsSyncCommunityID;

@interface MapsSync.MapsSyncMutableReviewedPlace : MapsSync.MapsSyncMutableBaseItem {
    void /* unknown type, empty encoding */ _proxyObject;
}

@property (nonatomic) unsigned long long muid;
@property (nonatomic, copy) NSDate *lastSuggestedReviewDate;
@property (nonatomic) BOOL hasUserReviewed;
@property (nonatomic, retain) NSNumber *rating;
@property (nonatomic) int uploadedPhotosCount;
@property (nonatomic) short version;
@property (nonatomic, retain) _TtC8MapsSync27MapsSyncAnonymousCredential *anonymousCredential;
@property (nonatomic, retain) _TtC8MapsSync19MapsSyncCommunityID *communityID;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;
- (void)setMapItemIdentifier:(id)a0;

@end

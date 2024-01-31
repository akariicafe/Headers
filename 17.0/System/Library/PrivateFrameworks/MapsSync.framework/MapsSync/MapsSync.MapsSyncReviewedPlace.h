@class NSString, _TtC8MapsSync27MapsSyncAnonymousCredential, NSDate, NSNumber, _TtC8MapsSync19MapsSyncCommunityID;

@interface MapsSync.MapsSyncReviewedPlace : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _muid;
    void /* unknown type, empty encoding */ _lastSuggestedReviewDate;
    void /* unknown type, empty encoding */ _hasUserReviewed;
    void /* unknown type, empty encoding */ _uploadedPhotosCount;
    void /* unknown type, empty encoding */ _resultProviderIdentifier;
    void /* unknown type, empty encoding */ _rating;
    void /* unknown type, empty encoding */ _latitude;
    void /* unknown type, empty encoding */ _longitude;
    void /* unknown type, empty encoding */ _version;
    void /* unknown type, empty encoding */ _anonymousCredential;
    void /* unknown type, empty encoding */ _anonymousCredentialUnstored;
    void /* unknown type, empty encoding */ _communityId;
}

@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSNumber *resultProviderIdentifier;
@property (nonatomic, readonly) NSNumber *rating;
@property (nonatomic, readonly) NSNumber *latitude;
@property (nonatomic, readonly) NSNumber *longitude;
@property (nonatomic, readonly) NSDate *lastSuggestedReviewDate;
@property (nonatomic, readonly) BOOL hasUserReviewed;
@property (nonatomic, readonly) int uploadedPhotosCount;
@property (nonatomic, readonly) short version;
@property (nonatomic, readonly) _TtC8MapsSync27MapsSyncAnonymousCredential *anonymousCredential;
@property (nonatomic, readonly) _TtC8MapsSync19MapsSyncCommunityID *communityId;
@property (nonatomic, readonly) NSString *description;

+ (void)fetch:(long long)a0 :(long long)a1 :(id)a2 sort:(long long)a3 ascending:(BOOL)a4 completion:(id /* block */)a5;
+ (id)fetchWithMuids:(id)a0;
+ (void)fetch:(long long)a0 :(long long)a1 :(id)a2 sort:(long long)a3 ascending:(BOOL)a4 completionWithError:(id /* block */)a5;
+ (void)fetchWithMuids:(id)a0 completion:(id /* block */)a1;

- (id)initWithObject:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (id)initWithAnonymousCredential:(id)a0;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end

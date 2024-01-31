@class NSString, _TtC8MapsSync19MapsSyncDataSession;

@interface MapsSync.MapsSyncCachedUserReview : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _muid;
    void /* unknown type, empty encoding */ _numberPhotosUploaded;
    void /* unknown type, empty encoding */ _rating;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) int numberPhotosUploaded;
@property (nonatomic, readonly) short rating;
@property (nonatomic, readonly) _TtC8MapsSync19MapsSyncDataSession *session;

- (id)initWithObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end

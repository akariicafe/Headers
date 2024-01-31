@class NSMutableDictionary;

@interface AAUIServerSuppliedProfilePictureCache : NSObject {
    NSMutableDictionary *_personIDToEntryMap;
    double _pictureDiameter;
}

@property (readonly, nonatomic) double pictureDiameter;

+ (id)sharedCache;

- (id)init;
- (void)_ensureMinimumPictureDiameter_mustBeSynchronized:(double)a0;
- (id)serverCacheTagForPersonID:(id)a0 diameter:(double)a1;
- (void)profilePictureForPersonID:(id)a0 diameter:(double)a1 completion:(id /* block */)a2;
- (id)_entryForPersonID:(id)a0;
- (void).cxx_destruct;
- (BOOL)updateProfilePicture:(id)a0 didReceiveNewPicture:(BOOL)a1 serverCacheTag:(id)a2 forPersonID:(id)a3;
- (id)profilePictureForPersonID:(id)a0 diameter:(double)a1 serverFetchBlock:(id /* block */)a2;

@end

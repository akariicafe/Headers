@interface SMMMediaLibrary : NSObject

+ (id)identifierForItem:(id)a0;
+ (void)addGlobalPlaylistWithIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)addTrackWithIdentifier:(long long)a0 completion:(id /* block */)a1;
+ (id)predicateForTracksWithAdamIdentifiers:(id)a0;

@end

@class MPMediaPlaylist;

@interface _NMSyncDefaultsAssociatedObject : NSObject

@property (retain, nonatomic) MPMediaPlaylist *assetSyncPlaylist;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_mediaLibraryDidChangeNotification:(id)a0;

@end

@class NSURL, NSDictionary, NSArray;

@interface SSVPlaybackItem : NSObject

@property (copy, nonatomic) NSURL *fallbackStreamingKeyServerURL;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL;
@property (readonly, copy, nonatomic) NSDictionary *itemDictionary;
@property (readonly, copy, nonatomic) id itemIdentifier;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSURL *HLSPlaylistURL;
@property (readonly, nonatomic) NSURL *HLSKeyCertificateURL;
@property (readonly, nonatomic) NSURL *HLSKeyServerURL;
@property (readonly, nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)assetForFlavor:(id)a0;
- (void)_enumerateAssetsUsingBlock:(id /* block */)a0;
- (id)initWithItemDictionary:(id)a0;

@end

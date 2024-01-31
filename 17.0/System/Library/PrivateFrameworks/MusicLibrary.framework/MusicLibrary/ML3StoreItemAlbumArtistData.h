@class NSData, NSArray, NSDictionary;

@interface ML3StoreItemAlbumArtistData : NSObject {
    NSArray *_lookupItems;
    NSData *_albumArtistData;
    NSDictionary *_trackItemImportProperties;
    NSArray *_parsedStoreAlbumArtistImportProperties;
}

@property (readonly, nonatomic) NSData *albumArtistData;
@property (readonly, nonatomic) NSArray *parsedStoreAlbumArtistImportProperties;
@property (readonly, nonatomic) unsigned long long albumArtistCount;

- (void).cxx_destruct;
- (id)initWithLookupItems:(id)a0;
- (id)_parsedStoreAlbumArtistItemsImportPropertiesFromLookupItems;
- (id)_parsedStoreAlbumArtistItemsImportPropertiesFromSerializedLookupItems;
- (id)_parsedStoreAlbumArtistItemsImportPropertiesFromTrackImportItems;
- (id)initWithAlbumArtistData:(id)a0;
- (id)initWithTrackItemImportProperties:(id)a0;

@end

@class NSDictionary;

@interface ML3StoreItemAlbumData : NSObject {
    NSDictionary *_trackItemImportProperties;
    NSDictionary *_parsedStoreAlbumImportProperties;
}

- (void).cxx_destruct;
- (id)initWithTrackImportItem:(id)a0;
- (id)parsedStoreAlbumImportProperties;

@end

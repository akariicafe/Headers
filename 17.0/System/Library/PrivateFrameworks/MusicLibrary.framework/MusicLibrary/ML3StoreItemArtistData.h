@class NSDictionary;

@interface ML3StoreItemArtistData : NSObject {
    NSDictionary *_parsedStoreArtistImportProperties;
    NSDictionary *_trackItemImportProperties;
}

@property (readonly, nonatomic) NSDictionary *parsedStoreArtistItemImportProperties;

- (void).cxx_destruct;
- (id)initWithTrackImportItem:(id)a0;

@end

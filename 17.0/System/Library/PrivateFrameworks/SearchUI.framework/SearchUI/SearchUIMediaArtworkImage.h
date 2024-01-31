@class NSString;

@interface SearchUIMediaArtworkImage : SearchUIImage

@property (retain) NSString *persistentID;
@property (retain) NSString *universalLibraryID;
@property (retain) NSString *spotlightIdentifier;
@property long long mediaEntityType;

- (Class)classForCoder;
- (void).cxx_destruct;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithSpotlightIdentifier:(id)a0;
- (id)initWithSFImage:(id)a0;

@end

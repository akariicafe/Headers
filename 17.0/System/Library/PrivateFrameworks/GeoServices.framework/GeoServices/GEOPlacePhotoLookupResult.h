@class NSArray, GEOMapItemIdentifier;

@interface GEOPlacePhotoLookupResult : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _originalRange;
}

@property (readonly, nonatomic) NSArray *photos;
@property (readonly, nonatomic) GEOMapItemIdentifier *mapItemIdentifier;
@property (readonly, nonatomic) unsigned long long totalPhotoCount;

+ (void)buildLookupResultForPlaceWithPhotoCategories:(id)a0 mapItemIdentifier:(id)a1 originalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 completion:(id /* block */)a3;
+ (void)buildVendorLookupResultForPlaceWithCaptionedPhotos:(id)a0 mapItemIdentifier:(id)a1 originalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithPhotos:(id)a0 totalPhotoCount:(unsigned long long)a1 mapItemItemIdentifier:(id)a2 originalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;

@end

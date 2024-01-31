@class NSString;

@interface MPTiledArtworkRepresentationCacheKey : NSObject <MPArtworkDataSourceVisualIdenticality> {
    id _entityIdentifier;
    id _namespaceIdentifier;
    unsigned long long _numberOfColumns;
    unsigned long long _numberOfRows;
    id _revisionIdentifier;
    struct CGSize { double width; double height; } _scaledFittingSize;
    double _tileSpacing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)stringRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTiledArtworkRequest:(id)a0 scaledFittingSize:(struct CGSize { double x0; double x1; })a1;

@end

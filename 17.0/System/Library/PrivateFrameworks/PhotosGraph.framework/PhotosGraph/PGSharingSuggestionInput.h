@class NSArray, PHFetchResult, PGGraph, PHPhotoLibrary;

@interface PGSharingSuggestionInput : NSObject {
    NSArray *_assetLocalIdentifiers;
    NSArray *_momentLocalIdentifiers;
    NSArray *_momentNodes;
    PHFetchResult *_assets;
    PHFetchResult *_moments;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) PGGraph *graph;
@property (readonly, nonatomic) NSArray *momentNodes;
@property (readonly, nonatomic) PHFetchResult *assets;
@property (readonly, nonatomic) PHFetchResult *moments;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAssetLocalIdentifiers:(id)a0 momentLocalIdentifiers:(id)a1 graph:(id)a2 photoLibrary:(id)a3;
- (id)initWithMomentNodes:(id)a0;

@end

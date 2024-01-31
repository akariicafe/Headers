@interface SMAssetClient : NSObject {
    void /* unknown type, empty encoding */ artworkImageLoader;
}

- (id)init;
- (void).cxx_destruct;
- (void)fetchArtwork:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (id)initWithDependenciesWrapper:(id)a0;

@end

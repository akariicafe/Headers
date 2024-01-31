@interface MTNowPlayingArtworkProvider : NSObject {
    void /* unknown type, empty encoding */ artworkProvider;
}

- (id)init;
- (void).cxx_destruct;
- (id)fetchInfoCenterArtworkWith:(id)a0 at:(double)a1 of:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;

@end

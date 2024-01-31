@interface SeymourUI.CompletedWorkoutShareArtworkItemProvider : NSItemProvider {
    void /* unknown type, empty encoding */ assetClient;
    void /* unknown type, empty encoding */ artwork;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ size;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 typeIdentifier:(id)a1;
- (id)loadDataRepresentationForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end

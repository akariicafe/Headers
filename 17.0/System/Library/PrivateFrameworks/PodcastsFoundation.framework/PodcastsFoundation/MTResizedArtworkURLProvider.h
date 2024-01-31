@interface MTResizedArtworkURLProvider : NSObject

@property (class, nonatomic, retain) MTResizedArtworkURLProvider *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)resizedArtworkURLString:(id)a0 withDimension:(unsigned long long)a1;

@end

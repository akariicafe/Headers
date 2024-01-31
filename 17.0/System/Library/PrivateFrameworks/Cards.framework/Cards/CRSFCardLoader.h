@class NSCache;

@interface CRSFCardLoader : NSObject {
    NSCache *_loadedCards;
}

+ (id)sharedLoader;

- (id)init;
- (void).cxx_destruct;
- (void)loadSFCard:(id)a0 completion:(id /* block */)a1;

@end

@class NSMutableDictionary;

@interface VUICloudClient : NSObject

@property (retain, nonatomic) NSMutableDictionary *artworkMap;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)loadArtworkURLsForPurchaseHistoryIDs:(id)a0 completionHandler:(id /* block */)a1;

@end

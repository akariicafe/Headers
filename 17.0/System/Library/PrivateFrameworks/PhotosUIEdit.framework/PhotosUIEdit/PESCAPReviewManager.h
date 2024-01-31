@class NSMutableDictionary;

@interface PESCAPReviewManager : NSObject {
    NSMutableDictionary *_assetsMap;
}

@property (class, readonly, nonatomic) PESCAPReviewManager *sharedReviewManager;

- (id)init;
- (void)clearAll;
- (void).cxx_destruct;
- (id)payloadForAsset:(id)a0;
- (id)lastPasteBreadcrumb;
- (void)registerPayload:(id)a0 forAsset:(id)a1;

@end

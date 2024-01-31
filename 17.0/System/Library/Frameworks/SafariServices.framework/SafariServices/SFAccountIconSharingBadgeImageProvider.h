@class NSMutableDictionary, NSHashTable;

@interface SFAccountIconSharingBadgeImageProvider : NSObject {
    NSHashTable *_subscribers;
    NSMutableDictionary *_badgeDiameterToImageCache;
}

+ (id)sharedProvider;

- (id)init;
- (void).cxx_destruct;
- (id)_createBadgeImageWithDiameter:(unsigned long long)a0;
- (void)_resetAndInformSubscribers;
- (void)addCoordinatorAsSubscriber:(id)a0;
- (id)badgeImageForDiameter:(unsigned long long)a0;

@end

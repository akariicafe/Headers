@class SASBulletinCacheNode;

@interface SASBulletinCache : NSObject {
    unsigned long long _count;
    SASBulletinCacheNode *_oldestNode;
    SASBulletinCacheNode *_newestNode;
}

- (id)init;
- (id)_findNodeForBulletinID:(id)a0;
- (BOOL)removeBulletinForID:(id)a0;
- (void)_deleteNode:(id)a0;
- (void).cxx_destruct;
- (void)insertBulletin:(id)a0 fromFeed:(unsigned long long)a1;
- (BOOL)_isFeedRelevant:(unsigned long long)a0;
- (id)allBulletins;
- (id)cachedBulletinForID:(id)a0;
- (void)_purgeOldestNodes;

@end

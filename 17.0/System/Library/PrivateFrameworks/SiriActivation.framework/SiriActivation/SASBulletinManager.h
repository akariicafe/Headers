@class NSString, NSMutableDictionary, SASBulletinCache, BBObserver;
@protocol SASBulletinManagerDelegate;

@interface SASBulletinManager : NSObject <BBObserverDelegate> {
    BBObserver *_observer;
    SASBulletinCache *_bulletinCache;
    NSMutableDictionary *_bulletinsOnLockScreen;
}

@property (weak, nonatomic) id<SASBulletinManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_displayNameForBulletin:(id)a0;
- (void)_setupObserver;
- (id)init;
- (void)dealloc;
- (id)bulletinsOnLockScreen;
- (void)_bulletinsDidChange;
- (void)observer:(id)a0 removeBulletin:(id)a1 forFeed:(unsigned long long)a2;
- (id)bulletinForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)observer:(id)a0 removeBulletin:(id)a1;
- (void)modifyBulletinCompletionWithBulletin:(id)a0;
- (void)addBulletinCompletionWithBulletin:(id)a0 forFeed:(unsigned long long)a1;
- (void)observer:(id)a0 purgeReferencesToBulletinID:(id)a1;
- (void)observer:(id)a0 addBulletin:(id)a1 forFeed:(unsigned long long)a2;
- (void)observer:(id)a0 noteInvalidatedBulletinIDs:(id)a1;
- (id)allBulletins;
- (void)observer:(id)a0 modifyBulletin:(id)a1;

@end

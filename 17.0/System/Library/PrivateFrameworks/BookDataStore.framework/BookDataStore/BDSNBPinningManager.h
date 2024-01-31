@class BDSServiceProxy;

@interface BDSNBPinningManager : NSObject

@property (retain, nonatomic) BDSServiceProxy *serviceProxy;

- (id)init;
- (void).cxx_destruct;
- (id)updateWantToReadWithCompletion:(id /* block */)a0;
- (id)updateReadingNowWithCompletion:(id /* block */)a0;
- (void)audiobookStoreEnabledWithCompletion:(id /* block */)a0;
- (void)fetchMostRecentAudiobookWithCompletion:(id /* block */)a0;
- (void)updateBitrateForItemWithAdamID:(id)a0 completion:(id /* block */)a1;
- (id)updateWantToReadAndReadingNowWithJaliscoUpdateSuccessful:(BOOL)a0 completion:(id /* block */)a1;

@end

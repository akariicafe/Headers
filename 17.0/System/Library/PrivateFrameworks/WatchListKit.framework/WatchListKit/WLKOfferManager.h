@class NSArray, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKOfferManager : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSArray *offers;

+ (id)_offerPath;
+ (id)defaultOfferManager;
+ (id)_offerFullPath;

- (id)_connection;
- (void)removeOfferByBadgeId:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (id)_offers;
- (void)saveOffer:(id)a0 completionHandler:(id /* block */)a1;
- (void)_activeAccountChangedNotification:(id)a0;
- (void)_setOffers:(id)a0;
- (void)clearOffers:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_updateOfferFile;
- (void)fetchOffers:(BOOL)a0 completion:(id /* block */)a1;

@end

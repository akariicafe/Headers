@class NSData, NSString, NSArray, NSDate, NSError, NSDictionary, ICURLBag, ICStoreDialogResponse;

@interface ICMusicSubscriptionPlaybackResponse : NSObject <ICStoreResponseProtocol> {
    NSDictionary *_responseDictionary;
    NSDate *_requestDate;
    ICURLBag *_urlBag;
}

@property (readonly, copy, nonatomic) NSData *leaseInfoData;
@property (readonly, copy, nonatomic) NSData *subscriptionKeyBagData;
@property (readonly, copy, nonatomic) NSDate *leaseExpirationDate;
@property (readonly, copy, nonatomic) ICStoreDialogResponse *dialog;
@property (readonly, copy, nonatomic) NSString *householdID;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSError *serverError;
@property (readonly, copy, nonatomic) NSDictionary *metricsDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)a0 requestDate:(id)a1 urlBag:(id)a2;
- (id)itemWithStoreAdamID:(long long)a0;

@end

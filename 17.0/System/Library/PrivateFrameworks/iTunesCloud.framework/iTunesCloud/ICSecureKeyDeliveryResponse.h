@class NSData, NSError, NSDate, ICStoreDialogResponse;

@interface ICSecureKeyDeliveryResponse : NSObject

@property (copy, nonatomic) ICStoreDialogResponse *dialog;
@property (copy, nonatomic) NSError *serverError;
@property (nonatomic) unsigned long long bulkRefreshWaitInterval;
@property (copy, nonatomic) NSDate *rentalExpirationDate;
@property (copy, nonatomic) NSDate *rentalPlaybackStartDate;
@property (copy, nonatomic) NSDate *renewalDate;
@property (copy, nonatomic) NSData *serverPlaybackContextData;
@property (copy, nonatomic) NSData *contentKeyContextData;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long failureType;

- (id)description;
- (void).cxx_destruct;
- (void)finishAssetResourceLoadingRequest:(id)a0 withError:(id)a1;
- (id)initWithResponseDictionary:(id)a0 serverPlaybackContextData:(id)a1;

@end

@class NSString, NSDictionary, NSData, NSDate, NSNumber, TVPPlaybackReportingEventCollection;

@interface TVPSecureKeyRequest : TVPResourceLoadingRequest

@property (copy, nonatomic) NSData *keyRequestData;
@property (copy, nonatomic) NSData *certificateData;
@property (copy, nonatomic) NSData *contentIdentifierData;
@property (copy, nonatomic) NSDictionary *requestOptions;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned long long retryCount;
@property (copy, nonatomic) NSNumber *rentalID;
@property (readonly, nonatomic) NSString *reportingID;
@property (retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection;
@property (retain, nonatomic) NSNumber *requestCompletionTime;
@property (copy, nonatomic) NSDate *requestEndDate;
@property (copy, nonatomic) NSDate *requestStartDate;
@property (readonly, nonatomic) unsigned long long requestID;
@property (readonly, nonatomic) BOOL isRenewal;
@property (readonly, nonatomic) BOOL offlineKeyUsageAllowed;
@property (nonatomic) BOOL retrievesOfflineKeys;

- (void).cxx_destruct;
- (void)finishLoadingWithResponseData:(id)a0 renewalDate:(id)a1 keyType:(long long)a2;
- (id)initWithAssetResourceLoadingRequest:(id)a0;
- (void)loadKeyRequestDataAsynchronouslyWithCompletion:(id /* block */)a0;
- (BOOL)loadKeyRequestDataWithError:(id *)a0;
- (id)offlineKeyDataForResponseData:(id)a0 error:(id *)a1;

@end

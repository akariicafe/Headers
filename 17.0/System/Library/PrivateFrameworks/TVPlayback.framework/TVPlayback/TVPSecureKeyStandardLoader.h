@class TVPSecureKeyRequest, NSString, NSURL, NSDate, NSMutableArray, NSNumber;
@protocol TVPSecureKeyStandardLoaderRequestGenerating, TVPSecureKeyStandardLoaderConnectionHandling;

@interface TVPSecureKeyStandardLoader : TVPSecureKeyLoader

@property (retain, nonatomic) NSURL *certificateDataURL;
@property (retain, nonatomic) NSURL *keyDataURL;
@property (retain, nonatomic) TVPSecureKeyRequest *savedRequestToUseForStopping;
@property (retain, nonatomic) NSMutableArray *pendingKeyResponses;
@property (retain, nonatomic) NSDate *rentalExpirationDate;
@property (retain, nonatomic) NSDate *rentalPlaybackStartDate;
@property (retain, nonatomic) id<TVPSecureKeyStandardLoaderRequestGenerating> requestGenerator;
@property (retain, nonatomic) id<TVPSecureKeyStandardLoaderConnectionHandling> connectionHandler;
@property (nonatomic) BOOL holdKeyResponses;
@property (nonatomic) BOOL didSkipRentalCheckout;
@property (nonatomic) BOOL includeGUID;
@property (nonatomic) BOOL requiresExternalEntitlementCheck;
@property (retain, nonatomic) NSString *serviceProviderID;
@property (retain, nonatomic) NSNumber *rentalID;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)sendStopRequest;
- (id)_assetIdentifierForKeyRequest:(id)a0;
- (id)_bodyJSONDataForRequest:(id)a0 forceStop:(BOOL)a1;
- (id)initWithCertificateDataURL:(id)a0 keyDataURL:(id)a1;
- (void)startLoadingCertificateDataForRequest:(id)a0;
- (void)startLoadingContentIdentifierDataForRequest:(id)a0;
- (void)startLoadingKeyResponseDataForRequest:(id)a0;

@end

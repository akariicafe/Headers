@class NSString, NSDictionary, NSURL, NSArray, NSDate, NSUUID;

@interface APPCPromotedContent : NSObject <APPCPromotableContent> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ journeyIdentifier;
    void /* unknown type, empty encoding */ metaData;
    void /* unknown type, empty encoding */ disclosureURL;
    void /* unknown type, empty encoding */ disclosureRendererPayload;
    void /* unknown type, empty encoding */ brandName;
    void /* unknown type, empty encoding */ campaignText;
    void /* unknown type, empty encoding */ representations;
    void /* unknown type, empty encoding */ expirationDate;
    void /* unknown type, empty encoding */ adServerEnvironment;
    void /* unknown type, empty encoding */ videoRequestStartDate;
    void /* unknown type, empty encoding */ unfilledReasonDelegate;
    void /* unknown type, empty encoding */ overriddenAdType;
    void /* unknown type, empty encoding */ discardReason;
    void /* unknown type, empty encoding */ primitiveCreator;
    void /* unknown type, empty encoding */ diagnosticPrimitiveCreator;
    void /* unknown type, empty encoding */ placement;
    void /* unknown type, empty encoding */ serverResponseReceivedTimestamp;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ diagnosticMetricHelper;
@property (nonatomic, retain) void /* unknown type, empty encoding */ metricsHelper;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *journeyIdentifier;
@property (nonatomic, weak) void /* unknown type, empty encoding */ context;
@property (nonatomic, copy) NSDictionary *metaData;
@property (nonatomic, copy) NSURL *disclosureURL;
@property (nonatomic, copy) NSString *disclosureRendererPayload;
@property (nonatomic) void /* unknown type, empty encoding */ minimumTimeBetweenPresentation;
@property (nonatomic, copy) NSString *brandName;
@property (nonatomic, copy) NSString *campaignText;
@property (nonatomic, copy) NSArray *representations;
@property (nonatomic, retain) void /* unknown type, empty encoding */ installAttribution;
@property (nonatomic, retain) void /* unknown type, empty encoding */ bestRepresentation;
@property (nonatomic, retain) void /* unknown type, empty encoding */ error;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ placeholder;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *adServerEnvironment;
@property (nonatomic) void /* unknown type, empty encoding */ serverUnfilledReason;
@property (nonatomic, retain) void /* unknown type, empty encoding */ mediaMetricHelper;
@property (nonatomic) void /* unknown type, empty encoding */ attachedToView;
@property (nonatomic) void /* unknown type, empty encoding */ vended;
@property (nonatomic) void /* unknown type, empty encoding */ discarded;
@property (nonatomic) void /* unknown type, empty encoding */ consumed;
@property (nonatomic) void /* unknown type, empty encoding */ impressionThreshold;
@property (nonatomic, copy) NSDate *videoRequestStartDate;
@property (nonatomic) void /* unknown type, empty encoding */ discardedDueToPolicy;
@property (nonatomic, retain) void /* unknown type, empty encoding */ metricEventsTracking;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isLocationAvailableForAd;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isPAAvailableForAd;
@property (nonatomic, readonly) BOOL isOutstreamVideoAd;
@property (nonatomic, readonly) long long numOfArticlesSinceInterstitial;
@property (nonatomic, readonly) BOOL isMRAID;
@property (nonatomic, readonly) long long adType;
@property (nonatomic, readonly) NSUUID *contextIdentifier;
@property (nonatomic, readonly) BOOL available;
@property (nonatomic, readonly) NSDictionary *transparencyDetailsDictionary;
@property (nonatomic, readonly) long long feedMetadataContentProviderID;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)retrieveNetworkType;
- (void)replaceMetricsHelperWithNewMetricsHelper:(id)a0;

@end

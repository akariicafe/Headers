@class NSData, NSString, _CPDeviceContext;

@interface _CPUsageSinceLookback : PBCodable <_CPUsageSinceLookback, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long collectionStartTimestamp;
@property (nonatomic) long long collectionEndTimestamp;
@property (nonatomic) int client;
@property (nonatomic) int totalUsagesInCollectionPeriod;
@property (retain, nonatomic) _CPDeviceContext *context;
@property (nonatomic) int configuredLookbackTimeInDays;
@property (nonatomic) int activeDaysInCollectionPeriod;
@property (nonatomic) int totalEngagements;
@property (nonatomic) BOOL isDiagnosticsAndUsageEnabled;
@property (nonatomic) int invokedDays;
@property (nonatomic) int zkwEngagedDays;
@property (nonatomic) int searchedDays;
@property (nonatomic) int suggestionOrAppleResultEngagedDays;
@property (nonatomic) int webEngagedDays;
@property (nonatomic) int voiceSearchDays;
@property (nonatomic) int numSearchEngagements;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end

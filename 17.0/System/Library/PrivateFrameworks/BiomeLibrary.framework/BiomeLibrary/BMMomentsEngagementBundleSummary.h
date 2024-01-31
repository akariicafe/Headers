@class NSArray, NSString, NSDate, BMMomentsEngagementSuggestionIdentifier;

@interface BMMomentsEngagementBundleSummary : BMEventBase <BMStoreData> {
    BOOL _hasRaw_startDate;
    double _raw_startDate;
    BOOL _hasRaw_endDate;
    double _raw_endDate;
}

@property (readonly, nonatomic) BMMomentsEngagementSuggestionIdentifier *identifier;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) int interfaceType;
@property (readonly, nonatomic) double rankingScore;
@property (nonatomic) BOOL hasRankingScore;
@property (readonly, nonatomic) NSArray *attachedPhotoAssets;
@property (readonly, nonatomic) NSString *bundleInterfaceType;
@property (readonly, nonatomic) NSString *bundleEvergreenType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_attachedPhotoAssetsJSONArray;
- (id)initWithIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 interfaceType:(int)a3 rankingScore:(id)a4 attachedPhotoAssets:(id)a5;
- (id)initWithIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 interfaceType:(int)a3 rankingScore:(id)a4 attachedPhotoAssets:(id)a5 bundleInterfaceType:(id)a6 bundleEvergreenType:(id)a7;

@end

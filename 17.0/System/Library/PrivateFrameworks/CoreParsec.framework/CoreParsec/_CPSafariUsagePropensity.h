@class _CPEngagementTriggerRatio, NSString, NSData, _CPEngagementShareRatio;

@interface _CPSafariUsagePropensity : PBCodable <_CPSafariUsagePropensity, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float localGoto;
@property (nonatomic) float localTap;
@property (nonatomic) float parsecGoto;
@property (nonatomic) float parsecTap;
@property (nonatomic) float thirdPartyGoto;
@property (nonatomic) float thirdPartyTap;
@property (nonatomic) float thirdPartyCompletionOrRecentSearch;
@property (nonatomic) float goToSite;
@property (nonatomic) float other;
@property (nonatomic) float parsecWeb;
@property (nonatomic) float parsecAppStore;
@property (nonatomic) float parsecMaps;
@property (nonatomic) float parsecWiki;
@property (nonatomic) float parsecNews;
@property (nonatomic) float parsecStocks;
@property (nonatomic) float parsecWeather;
@property (nonatomic) float parsecOther;
@property (nonatomic) int totalEngagements;
@property (retain, nonatomic) _CPEngagementTriggerRatio *topHitTriggerRatio;
@property (nonatomic) int totalTopHitEngagements;
@property (retain, nonatomic) _CPEngagementShareRatio *engagementShareRatio;
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

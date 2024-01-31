@class PGHighlightTailorContext, CLSInvestigationPhotoKitFeeder, NSArray, NSString, NSSet, NSDictionary, NSObject, PHFetchResult, PGGraphHighlightNode;
@protocol OS_os_log, PGHighlightModel;

@interface PGHighlightTailorHighlightInfo : NSObject {
    NSObject<OS_os_log> *_loggingConnection;
}

@property (retain, nonatomic) NSSet *meaningLabels;
@property (readonly, nonatomic) id<PGHighlightModel> highlight;
@property (readonly, nonatomic) PGGraphHighlightNode *highlightNode;
@property (readonly, nonatomic) NSSet *momentNodes;
@property (readonly, nonatomic) NSDictionary *meaningLabelsByChildHighlightUUID;
@property (readonly, nonatomic) BOOL petIsPresent;
@property (readonly, nonatomic) CLSInvestigationPhotoKitFeeder *feeder;
@property (nonatomic) double promotionScore;
@property (nonatomic) unsigned long long numberOfExtendedAssets;
@property (retain, nonatomic) NSArray *uuidsOfEligibleAssets;
@property (retain, nonatomic) NSArray *childHighlights;
@property (readonly) PGHighlightTailorContext *highlightTailorContext;
@property (readonly, nonatomic) NSArray *privateSummarizedFeatures;
@property (readonly, nonatomic) NSArray *sharedSummarizedFeatures;
@property (readonly, nonatomic) NSArray *mixedSummarizedFeatures;
@property (readonly, nonatomic) PHFetchResult *momentFetchResult;
@property (copy, nonatomic) NSString *keyAssetPrivateUUID;
@property (copy, nonatomic) NSString *keyAssetSharedUUID;

- (id)description;
- (void).cxx_destruct;
- (id)assetsForSharingFilter:(unsigned short)a0;
- (id)generateSortedSummarizedFeaturesForSharingFilter:(unsigned short)a0 graph:(id)a1 featureSummaryGenerator:(id)a2;
- (id)initForTestingWithHighlight:(id)a0;
- (id)initWithHighlight:(id)a0 graph:(id)a1 highlightTailorContext:(id)a2;
- (id)initWithHighlight:(id)a0 loggingConnection:(id)a1;
- (void)setHighlightSummarizedFeaturesWithGraph:(id)a0;
- (id)uuidsOfRequiredAssetsForSharingFilter:(unsigned short)a0;

@end

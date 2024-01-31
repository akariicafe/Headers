@class PGDejunkerDeduperOptions, PGCurationOptions, PGCurationManager, NSString, NSMutableDictionary, PGKeyAssetCurationOptions, NSObject;
@protocol OS_os_log;

@interface PGDefaultEnrichmentProfile : NSObject <PGEnrichmentProfile> {
    NSObject<OS_os_log> *_loggingConnection;
}

@property (class, readonly) unsigned long long durationForSummary;

@property (readonly, nonatomic) PGCurationManager *curationManager;
@property (readonly, nonatomic) PGCurationOptions *curationOptions;
@property (readonly, nonatomic) PGKeyAssetCurationOptions *keyAssetCurationOptions;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) PGDejunkerDeduperOptions *extendedCurationOptions;
@property (nonatomic) BOOL collectsDebugInfo;
@property (readonly, nonatomic) NSMutableDictionary *debugInfos;
@property (readonly, nonatomic) unsigned short targetEnrichmentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)evaluatedDurationsWithAssets:(id)a0 options:(id)a1;
+ (double)evaluatedDurationsWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 options:(id)a2;
+ (double)targetCurationDurationWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 options:(id)a2;
+ (double)targetCurationDurationWithPrivateAssets:(id)a0 sharedAssets:(id)a1 sharingFilter:(unsigned short)a2 options:(id)a3;

- (void).cxx_destruct;
- (BOOL)canEnrichHighlight:(id)a0 withOptions:(unsigned long long)a1;
- (BOOL)canUseLocationInformationWithHighlightInfo:(id)a0 graph:(id)a1;
- (id)curationOptionsWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1;
- (id)debugInfoDictionaryByAddingItemInfosToDebugInfo:(id)a0;
- (unsigned short)enrichmentStateWithHighlightInfo:(id)a0;
- (id)extendedCurationWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 progressBlock:(id /* block */)a2;
- (id)faceInfosWithAsset:(id)a0;
- (id)highlightInfoWithHighlight:(id)a0 graph:(id)a1 highlightTailorContext:(id)a2;
- (id)initWithCurationManager:(id)a0 loggingConnection:(id)a1;
- (id)keyAssetCurationCriteriaWithHighlightInfo:(id)a0 graph:(id)a1;
- (id)keyAssetWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 graph:(id)a2 progressBlock:(id /* block */)a3;
- (id)momentProcessedLocationByMomentUUIDWithHighlightInfo:(id)a0 graph:(id)a1;
- (id)momentTitleByMomentUUIDWithHighlightInfo:(id)a0;
- (double)promotionScoreWithHighlightInfo:(id)a0;
- (id)summaryCurationWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 progressBlock:(id /* block */)a2;
- (id)titleWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 curatedAssets:(id)a2 keyAsset:(id)a3 createVerboseTitle:(BOOL)a4;

@end

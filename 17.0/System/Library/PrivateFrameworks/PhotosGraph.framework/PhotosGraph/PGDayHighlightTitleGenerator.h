@class PGGraphMomentNodeCollection, NSString, NSArray, PGTitleGenerationContext, PGTitleTuple, NSObject;
@protocol OS_os_log;

@interface PGDayHighlightTitleGenerator : NSObject <PGFeatureSummaryTitleGeneratorProtocol> {
    NSArray *_summarizedFeatures;
    PGGraphMomentNodeCollection *_momentNodes;
    NSObject<OS_os_log> *_loggingConnection;
    PGTitleGenerationContext *_titleGenerationContext;
}

@property (readonly, nonatomic) PGTitleTuple *titleTuple;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dayHighlightMeaningLabels;
- (id)initWithSummarizedFeatures:(id)a0 momentNodes:(id)a1 titleGenerationContext:(id)a2 loggingConnection:(id)a3;
- (id)localizedTitleStringForSortedSummarizedFeatures:(id)a0;
- (id)localizedTitleStringFromBusinessFeature:(id)a0;
- (id)localizedTitleStringFromDistrictNode:(id)a0 districtName:(id)a1;
- (id)localizedTitleStringFromHolidayDateFeature:(id)a0;
- (id)localizedTitleStringFromLocationFeature:(id)a0;
- (id)localizedTitleStringFromMeaningFeature:(id)a0;
- (id)localizedTitleStringFromPublicEventFeature:(id)a0;
- (id)nameFromLocationFeature:(id)a0;

@end

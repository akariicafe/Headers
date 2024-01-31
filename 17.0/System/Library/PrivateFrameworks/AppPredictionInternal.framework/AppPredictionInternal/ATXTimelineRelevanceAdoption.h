@class ATXInformationStore, NSDictionary, ATXTimelineAbuseControlConfig, ATXAdoptionTypeToBudgetMapper;

@interface ATXTimelineRelevanceAdoption : NSObject {
    NSDictionary *_globalAdoptionPlist;
    ATXInformationStore *_informationStore;
    NSDictionary *_distinctScoreCounts;
    ATXTimelineAbuseControlConfig *_abuseControlConfig;
    ATXAdoptionTypeToBudgetMapper *_budgetMapper;
}

- (id)init;
- (void).cxx_destruct;
- (id)globalDiverseSchemaRawNumber:(id)a0 kind:(id)a1;
- (BOOL)_hasDiverseSchemaGlobally:(id)a0 kind:(id)a1;
- (void)_updateQuotasDictionary:(id)a0 forWidgetBundleId:(id)a1 widgetKind:(id)a2 parameterName:(id)a3 withValue:(long long)a4;
- (void)_updateQuotasForWidgetBundleId:(id)a0 widgetKind:(id)a1 quotasDictionary:(id)a2;
- (unsigned long long)adoptionTypeForWidgetBundleId:(id)a0 kind:(id)a1;
- (id)initWithGlobalAdoptionPlist:(id)a0 informationStore:(id)a1 abuseControlConfig:(id)a2;
- (void)persistQuotasWithActivity:(id)a0;
- (void)trainWidgetPredictionModelWithActivity:(id)a0;

@end

@class ATXInfoToBlendingConfidenceMapper, ATXHomeScreenConfigCache, ATXIntentMetadataCache, LNMetadataProvider, NSArray, ATXEngagementRecordManager, ATXWidgetDescriptorCache;

@interface ATXActionToWidgetConverter : NSObject {
    ATXWidgetDescriptorCache *_descriptorCache;
    ATXIntentMetadataCache *_intentMetadataCache;
    ATXInfoToBlendingConfidenceMapper *_infoConfidenceMapper;
    ATXEngagementRecordManager *_engagementRecordManager;
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
    LNMetadataProvider *_metadataProvider;
    NSArray *_homeScreenPages;
    BOOL _allowsSendMessageIntentConversion;
}

+ (BOOL)isWidgetIntent:(id)a0 validConversionFromActionIntent:(id)a1;

- (id)init;
- (id)_selectPersonIntentForSendMessageIntent:(id)a0;
- (id)_peopleInfoSuggestionForSendMessageIntent:(id)a0 action:(id)a1;
- (id)convertSuggestions:(id)a0;
- (id)initWithAllowsSendMessageIntentConversion:(BOOL)a0;
- (id)_infoSuggestionForAction:(id)a0;
- (id)_infoSuggestionForLinkActionContainer:(id)a0;
- (void).cxx_destruct;
- (id)_convertedSuggestionFromInfoSuggestion:(id)a0 originalSuggestion:(id)a1;
- (id)_widgetForIntent:(id)a0;
- (id)initWithIntentMetadataCache:(id)a0 widgetDescriptorCache:(id)a1 infoConfidenceMapper:(id)a2 engagementRecordManager:(id)a3 metadataProvider:(id)a4 allowsSendMessageIntentConversion:(BOOL)a5;

@end

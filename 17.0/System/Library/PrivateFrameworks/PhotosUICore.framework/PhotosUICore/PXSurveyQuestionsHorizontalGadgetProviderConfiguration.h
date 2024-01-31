@class NSString, PXSurveyQuestionsGadgetProvider, PXRadarConfiguration, NSArray;

@interface PXSurveyQuestionsHorizontalGadgetProviderConfiguration : NSObject {
    long long _category;
    id /* block */ _customInfoAlertActionViewControllerProvider;
    NSString *_radarTitle;
    NSArray *_radarKeywordIDs;
}

@property (class, readonly) PXSurveyQuestionsHorizontalGadgetProviderConfiguration *generalConfiguration;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PXSurveyQuestionsGadgetProvider *gadgetProvider;
@property (readonly, copy, nonatomic) NSString *infoAlertTitle;
@property (readonly, copy, nonatomic) NSString *infoAlertMessage;
@property (readonly, copy, nonatomic) NSString *hideForeverAlertMessage;
@property (readonly, copy, nonatomic) NSString *radarPromptAnsweredQuestionCountDefaultsKey;
@property (readonly, copy, nonatomic) NSString *radarPromptDateDefaultsKey;
@property (readonly, copy, nonatomic) NSString *hideDateDefaultsKey;
@property (readonly, copy, nonatomic) NSString *sectionTitle;
@property (readonly, copy, nonatomic) NSString *customInfoAlertActionTitle;
@property (readonly, copy, nonatomic) PXRadarConfiguration *radarConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithCategory:(long long)a0 gadgetProvider:(id)a1;
- (id)customInfoAlertActionViewController:(id *)a0;

@end

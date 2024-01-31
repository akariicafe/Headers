@class NSString, SPClientSession;
@protocol SUISpotlightControllerSearchAppDelegate, SFFeedbackListener, SUISpotlightControllerSearchFieldDelegate, SUISpotlightControllerResultsViewDelegate;

@interface SUISpotlightController : NSObject

@property (retain, nonatomic) SPClientSession *clientSession;
@property (weak) id<SUISpotlightControllerSearchFieldDelegate> searchFieldDelegate;
@property (weak) id<SUISpotlightControllerResultsViewDelegate> resultsViewDelegate;
@property (weak) id<SUISpotlightControllerSearchAppDelegate> appDelegate;
@property (weak) id<SFFeedbackListener> feedbackDelegate;
@property (retain, nonatomic) NSString *currentSearchString;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithCommand:(id)a0 triggerEvent:(unsigned long long)a1;
- (void)startQueryTaskWithSearchString:(id)a0 queryOptions:(unsigned long long)a1 sourceResult:(id)a2 triggerEvent:(unsigned long long)a3 languages:(id)a4 currentKeyboardLanguage:(id)a5 queryId:(unsigned long long)a6;
- (void)updateWithSections:(id)a0;
- (void)updateWithSuggestionResult:(id)a0 triggerEvent:(unsigned long long)a1 languages:(id)a2 currentKeyboardLanguage:(id)a3 queryId:(unsigned long long)a4;

@end

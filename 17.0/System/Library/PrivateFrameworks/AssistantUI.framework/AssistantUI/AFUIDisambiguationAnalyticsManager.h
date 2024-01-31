@class NSArray;
@protocol AFDisambiguationAssistance, AFUIDisambiguationAnalyticsManagerDataSource;

@interface AFUIDisambiguationAnalyticsManager : NSObject

@property (weak, nonatomic) id<AFUIDisambiguationAnalyticsManagerDataSource> dataSource;
@property (retain, nonatomic) NSArray *listItems;
@property (retain, nonatomic) id<AFDisambiguationAssistance> disambiguationAssistance;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)logDisambiguationDismissedEvent;
- (id)_allListItems;
- (id)_listItemMatchingAceId:(id)a0;
- (void)_logDisambiguationSelectedEventWithListItem:(id)a0;
- (void)_recordSASMetrics:(id)a0 withSelectedBundleId:(id)a1 originalCommandId:(id)a2;
- (void)logDisambiguationItemSelected:(id)a0;

@end

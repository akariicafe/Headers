@class VKCImageAnalysis, NSString, NSDictionary, NSDate, NSMutableArray;

@interface VKAnalyticsSessionAccumulator : NSObject

@property (retain, nonatomic) VKCImageAnalysis *analysis;
@property (retain, nonatomic) NSMutableArray *interactionEvents;
@property (retain, nonatomic) NSMutableArray *textEvents;
@property (retain, nonatomic) NSMutableArray *quickActionEvents;
@property (retain, nonatomic) NSMutableArray *mrcEvents;
@property (retain, nonatomic) NSMutableArray *ddEvents;
@property (retain, nonatomic) NSMutableArray *vsEvents;
@property (retain, nonatomic) NSMutableArray *subjectEvents;
@property (retain, nonatomic) NSDate *sessionOpenDate;
@property (nonatomic) BOOL didSelectText;
@property (nonatomic) unsigned long long numberOfEvents;
@property (nonatomic) unsigned long long numberOfTextEvents;
@property (nonatomic) unsigned long long numberOfMRCEvents;
@property (nonatomic) unsigned long long numberOfDDEvents;
@property (nonatomic) unsigned long long numberOfVSEvents;
@property (nonatomic) unsigned long long numberOfQuickActionEvents;
@property (nonatomic) unsigned long long numberOfSubjectEvents;
@property (nonatomic) unsigned long long numberOfMRCElements;
@property (nonatomic) unsigned long long numberOfDDElements;
@property (nonatomic) unsigned long long numberOfVSElements;
@property (nonatomic) unsigned long long textLength;
@property (nonatomic) unsigned long long averageTextSelectionLength;
@property (nonatomic) unsigned long long numberOfSelectionChanges;
@property (nonatomic) BOOL didActivateHighlightAll;
@property (nonatomic) BOOL didActivateRegex;
@property (nonatomic) double sessionDuration;
@property (nonatomic) BOOL isPerformingAutomatedTest;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsDictionary;

- (void)send;
- (void)close;
- (id)description;
- (void).cxx_destruct;
- (void)addEvent:(id)a0;
- (void)calculateAverageSelectedLengthFromTextEvents;
- (void)calculateDidActivateRegex;
- (void)calculateDidHighlightAll;
- (id)initWithAnalysis:(id)a0 customIdentifier:(id)a1;

@end

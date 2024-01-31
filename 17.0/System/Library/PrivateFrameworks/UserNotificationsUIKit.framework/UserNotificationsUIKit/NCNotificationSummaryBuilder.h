@class NSString, NSMutableDictionary, NSMutableOrderedSet, NCNotificationRequest, NSMutableArray;

@interface NCNotificationSummaryBuilder : NSObject {
    NCNotificationRequest *_leadingNotificationRequest;
    NSMutableOrderedSet *_formatStrings;
    NSMutableDictionary *_formatStringsCounts;
    NSMutableOrderedSet *_arguments;
    NSMutableDictionary *_argumentsCounts;
    unsigned long long _defaultFormatsCount;
    unsigned long long _emptyArgumentsCount;
}

@property (readonly, copy, nonatomic) NSString *summaryText;
@property (readonly, nonatomic) NSMutableArray *notificationRequests;

- (void)_insertString:(id)a0 intoSequence:(id)a1 withCounters:(id)a2;
- (void)_addNotificationRequest:(id)a0;
- (void)_updateSummaryText;
- (id)_localizedSummaryWithFormats:(id)a0 andCounts:(id)a1;
- (id)_filteredArgumentsArrayWithArguments:(id)a0;
- (id)_defaultLocalizedSummaryWithNotificationsCount:(unsigned long long)a0 arguments:(id)a1;
- (id)_formatListWithArguments:(id)a0;
- (id)description;
- (id)_localizedSummaryWithFormat:(id)a0 notificationsCount:(unsigned long long)a1 arguments:(id)a2;
- (void).cxx_destruct;
- (id)_defaultLocalizedSummaryWithNotificationsCount:(unsigned long long)a0;
- (id)_formatListWithArguments:(id)a0 truncated:(BOOL)a1 truncatedArgumentsCount:(unsigned long long *)a2;
- (id)_buildSummaryText;
- (void)updateWithNotificationRequests:(id)a0;
- (unsigned long long)_summaryNotificationsCount;

@end

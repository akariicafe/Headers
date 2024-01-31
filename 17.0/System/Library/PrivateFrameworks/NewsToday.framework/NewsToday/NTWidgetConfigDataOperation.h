@class NSDictionary, FCHeldRecords, NSArray;
@protocol FCContentContext;

@interface NTWidgetConfigDataOperation : FCOperation

@property (retain, nonatomic) FCHeldRecords *cachedRecords;
@property (retain, nonatomic) NSDictionary *resultDefaultConfigurationDictionary;
@property (retain, nonatomic) NSDictionary *resultSingleTagConfigurationDictionary;
@property (retain, nonatomic) NSArray *resultArticleIDs;
@property (retain, nonatomic) NSArray *resultArticleListIDs;
@property (retain, nonatomic) NSDictionary *resultHeldRecordsByType;
@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) NSDictionary *widgetConfiguration;
@property (copy, nonatomic) id /* block */ widgetConfigDataCompletionHandler;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (void)_collectRecordsFromWidgetConfigDictionary:(id)a0;
- (void)_finalizeResultFromCachedRecords;

@end

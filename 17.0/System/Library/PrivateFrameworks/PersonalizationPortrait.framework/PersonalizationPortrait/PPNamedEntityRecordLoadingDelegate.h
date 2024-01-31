@interface PPNamedEntityRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id /* block */ namedEntityRecordsSetup;
@property (copy, nonatomic) id /* block */ namedEntityRecordsHandler;
@property (copy, nonatomic) id /* block */ namedEntityRecordsCompletion;
@property (copy, nonatomic) id /* block */ recentNamedEntityRecordsSetup;
@property (copy, nonatomic) id /* block */ recentNamedEntityRecordsHandler;
@property (copy, nonatomic) id /* block */ recentNamedEntityRecordsCompletion;
@property (copy, nonatomic) id /* block */ resetNamedEntityRecordData;

- (unsigned char)recentRecordLoadingSetup;
- (void)recentRecordLoadingCompletion;
- (void)recordLoadingCompletion;
- (id)initWithName:(id)a0;
- (id)description;
- (void)resetRecordData;
- (void).cxx_destruct;
- (unsigned char)recordLoadingHandler:(id)a0;
- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (unsigned char)recordLoadingSetup;

@end

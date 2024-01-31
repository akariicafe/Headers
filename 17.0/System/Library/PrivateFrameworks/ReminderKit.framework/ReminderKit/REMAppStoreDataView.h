@class REMStore;

@interface REMAppStoreDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)fetchAppStoreCloudConfigurationPropertiesWithError:(id *)a0;
- (id)fetchCreatedOrCompletedRemindersCountFromDate:(id)a0 toDate:(id)a1 error:(id *)a2;

@end

@class REMStore;

@interface REMICloudIsOffDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)fetchICloudIsOffCloudConfigurationPropertiesWithError:(id *)a0;

@end

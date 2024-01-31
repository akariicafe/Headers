@class MCFileAccessRepairTool, NSDictionary, NSString, NSError;

@interface MCDictionaryWriter : NSObject

@property (copy, nonatomic) NSError *serializeError;
@property (copy, nonatomic) NSError *writeError;
@property (copy, nonatomic) NSError *beforeWriteRepairError;
@property (copy, nonatomic) NSError *afterWriteRepairError;
@property (retain, nonatomic) MCFileAccessRepairTool *repairTool;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSString *path;

- (BOOL)write;
- (id)createRepairTool;
- (BOOL)writeData:(id)a0 error:(id *)a1;
- (void)reset;
- (id)initWithDictionary:(id)a0 path:(id)a1;
- (id)serializedData;
- (BOOL)didWriteSucceed;
- (void)serializeDataAndWriteToStorage;
- (void).cxx_destruct;
- (void)logResultOfWrite;
- (void)logStartOfWrite;
- (BOOL)repairAccessIfNecessaryWithError:(id *)a0;

@end

@class CNContactStore, NSArray, CNResult, NSData, CNChangeHistoryFetchRequest;

@interface CNAvatarCacheChangeHistoryAnalysisTask : CNTask

@property (readonly, nonatomic) CNContactStore *store;
@property (readonly, nonatomic) NSData *startingToken;
@property (retain, nonatomic) CNChangeHistoryFetchRequest *request;
@property (retain, nonatomic) CNResult *enumerator;
@property (retain, nonatomic) NSData *finalToken;
@property (retain, nonatomic) NSArray *identifiers;

- (id)run:(id *)a0;
- (void).cxx_destruct;
- (void)executeRequest;
- (void)extractIdentifiers;
- (id)initWithContactStore:(id)a0 startingToken:(id)a1;
- (void)makeRequest;

@end

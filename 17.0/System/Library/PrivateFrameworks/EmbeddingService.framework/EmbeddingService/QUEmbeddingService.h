@class NSString, CDMClient, NSLocale;

@interface QUEmbeddingService : NSObject

@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) CDMClient *cdmClient;

+ (id)log;
+ (id)signpostLog;
+ (BOOL)isUnitTested;
+ (void)setTestEmbeddings:(id)a0;
+ (id)testEmbeddings;

- (void)loadWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)getEmbeddingForQuery:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithLocale:(id)a0 version:(id)a1;

@end

@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CMLSimilarityClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, copy, nonatomic) NSString *useCase;

+ (id)new;
+ (id)calculateSimilarityScoresOf:(id)a0 toElements:(id)a1 error:(id *)a2;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithUseCase:(id)a0;
- (id)asyncResponseSimilarityScoresForElements:(id)a0 shardIndices:(id)a1 error:(id *)a2;
- (void)requestSimilarityScoresForElement:(id)a0 shardIndex:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)asyncResponseSimilarityScoresForElements:(id)a0 shardIndex:(unsigned long long)a1 error:(id *)a2;
- (id)decryptBatchOfSimilarityScores:(id)a0 error:(id *)a1;
- (id)decryptSimilarityScores:(id)a0 error:(id *)a1;
- (id)encryptBatchOfElements:(id)a0 shardIndex:(unsigned long long)a1 error:(id *)a2;
- (id)encryptBatchOfElements:(id)a0 shardIndices:(id)a1 error:(id *)a2;
- (id)encryptElement:(id)a0 shardIndex:(unsigned long long)a1 error:(id *)a2;
- (id)encryptElement:(id)a0 shardIndices:(id)a1 error:(id *)a2;
- (id)initWithUseCase:(id)a0 dispatchQueue:(id)a1;
- (id)initWithUseCase:(id)a0 dispatchQueue:(id)a1 connection:(id)a2;
- (void)requestSimilarityScoresForElement:(id)a0 shardIndices:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestSimilarityScoresForElements:(id)a0 shardIndex:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)requestSimilarityScoresForElements:(id)a0 shardIndices:(id)a1 completionHandler:(id /* block */)a2;
- (id)setPECConfig:(id)a0 error:(id *)a1;
- (id)similarityScoresForElement:(id)a0 shardIndex:(unsigned long long)a1 error:(id *)a2;
- (id)similarityScoresForElement:(id)a0 shardIndices:(id)a1 error:(id *)a2;
- (id)similarityScoresForElements:(id)a0 shardIndex:(unsigned long long)a1 error:(id *)a2;
- (id)similarityScoresForElements:(id)a0 shardIndices:(id)a1 error:(id *)a2;

@end

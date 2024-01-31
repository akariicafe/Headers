@class CMLPECConfig, NSString, NSArray, NSData, NSError, CMLPIRConfig;

@interface CipherML.XPCHandler : _TtCs12_SwiftObject <CMLXPCInterface> {
    void /* unknown type, empty encoding */ allowList;
    void /* unknown type, empty encoding */ requestsManager;
}

- (void)asyncResponseDataByKeyword:(NSData *)a0 useCase:(NSString *)a1 reply:(void (^)(NSString *, NSError *))a2;
- (void)asyncResponseDataByKeywords:(NSArray *)a0 useCase:(NSString *)a1 reply:(void (^)(NSString *, NSError *))a2;
- (void)asyncResponseSimilarityScoresForElements:(NSArray *)a0 shardIndices:(NSArray *)a1 useCase:(NSString *)a2 reply:(void (^)(NSString *, NSError *))a3;
- (void)constructPIRBatchRequestWithIndices:(NSArray *)a0 useCase:(NSString *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)constructPIRBatchRequestWithKeywords:(NSArray *)a0 useCase:(NSString *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)constructPIRRequestWithIndex:(unsigned long long)a0 useCase:(NSString *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)constructPIRRequestWithKeyword:(NSData *)a0 useCase:(NSString *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)constructPIRRequestWithLatitude:(double)a0 longitude:(double)a1 useCase:(NSString *)a2 reply:(void (^)(NSData *, NSError *))a3;
- (void)decryptBatchOfSimilarityScores:(NSData *)a0 useCase:(NSString *)a1 reply:(void (^)(NSArray *, NSError *))a2;
- (void)decryptPIRBatchResponse:(NSData *)a0 indices:(NSArray *)a1 useCase:(NSString *)a2 reply:(void (^)(NSArray *, NSError *))a3;
- (void)decryptPIRBatchResponse:(NSData *)a0 keywords:(NSArray *)a1 useCase:(NSString *)a2 reply:(void (^)(NSArray *, NSError *))a3;
- (void)decryptPIRResponse:(NSData *)a0 index:(unsigned long long)a1 useCase:(NSString *)a2 reply:(void (^)(NSData *, NSError *))a3;
- (void)decryptPIRResponse:(NSData *)a0 keyword:(NSData *)a1 useCase:(NSString *)a2 reply:(void (^)(NSData *, NSError *))a3;
- (void)decryptPIRResponse:(NSData *)a0 latitude:(double)a1 longitude:(double)a2 useCase:(NSString *)a3 reply:(void (^)(NSData *, NSError *))a4;
- (void)encryptBatchOfElements:(NSArray *)a0 shardIndices:(NSArray *)a1 useCase:(NSString *)a2 reply:(void (^)(NSData *, NSError *))a3;
- (void)queryStatusForUseCases:(NSArray *)a0 options:(unsigned long long)a1 reply:(void (^)(NSArray *, NSError *))a2;
- (void)requestDataByIndex:(unsigned long long)a0 useCase:(NSString *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)requestDataByIndices:(NSArray *)a0 useCase:(NSString *)a1 reply:(void (^)(NSArray *, NSError *))a2;
- (void)requestDataByKeyword:(NSData *)a0 useCase:(NSString *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)requestDataByKeywords:(NSArray *)a0 useCase:(NSString *)a1 reply:(void (^)(NSArray *, NSError *))a2;
- (void)requestDataByLatitude:(double)a0 longitude:(double)a1 useCase:(NSString *)a2 reply:(void (^)(NSData *, NSError *))a3;
- (void)setPECConfig:(CMLPECConfig *)a0 useCase:(NSString *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)setPIRConfig:(CMLPIRConfig *)a0 useCase:(NSString *)a1 reply:(void (^)(BOOL, NSError *))a2;
- (void)similarityScoresForElements:(NSArray *)a0 shardIndices:(NSArray *)a1 useCase:(NSString *)a2 reply:(void (^)(NSArray *, NSError *))a3;

@end

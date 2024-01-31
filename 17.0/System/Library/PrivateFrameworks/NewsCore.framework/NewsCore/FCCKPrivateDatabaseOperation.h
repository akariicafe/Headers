@class FCCKPrivateDatabase;

@interface FCCKPrivateDatabaseOperation : FCOperation

@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (nonatomic) BOOL skipPreflight;
@property (nonatomic) BOOL handleIdentityLoss;

- (unsigned long long)maxRetries;
- (id)init;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)runChildCKOperation:(id)a0 destination:(long long)a1;

@end

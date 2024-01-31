@class NSString, NSMutableDictionary, NSURL, SBKRequest;

@interface SBKTransaction : NSObject

@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (readonly, copy, nonatomic) NSString *domain;
@property (retain, nonatomic) NSURL *requestURL;
@property (retain, nonatomic) SBKRequest *activeRequest;

- (id)init;
- (void).cxx_destruct;
- (id)newRequest;
- (id)clampsKey;
- (id)initWithDomain:(id)a0 requestURL:(id)a1;
- (void)processDataInResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setTransactionContext:(id)a0 forKey:(id)a1;
- (id)transactionContextForKey:(id)a0;

@end

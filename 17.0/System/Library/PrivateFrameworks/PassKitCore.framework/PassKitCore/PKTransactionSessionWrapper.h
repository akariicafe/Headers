@class STSSession;
@protocol NFSession;

@interface PKTransactionSessionWrapper : NSObject {
    unsigned long long _firstInQueue;
}

@property (readonly, nonatomic) id<NFSession> nfSession;
@property (readonly, nonatomic) STSSession *stsSession;
@property (nonatomic, getter=isFirstInQueue) BOOL firstInQueue;

- (void)endSession;
- (void).cxx_destruct;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (id)initWithNFSession:(id)a0;
- (id)initWithSTSSession:(id)a0;

@end

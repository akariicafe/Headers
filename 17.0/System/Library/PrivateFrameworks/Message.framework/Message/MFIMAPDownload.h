@class MFCountingDataConsumer, NSMutableArray, MFBaseFilterDataConsumer;

@interface MFIMAPDownload : NSObject {
    unsigned int _uid;
    NSMutableArray *_pendingFetchResults;
    MFCountingDataConsumer *_countingConsumer;
}

@property (readonly, nonatomic) MFBaseFilterDataConsumer *mainConsumer;

- (BOOL)isComplete;
- (unsigned int)uid;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (id)error;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (unsigned long long)bytesFetched;
- (unsigned long long)expectedLength;
- (void)handleFetchResult:(id)a0;
- (id)initWithUid:(unsigned int)a0;
- (BOOL)isSuccessful;
- (unsigned long long)lengthOfDataBeforeLineConversion;
- (void)processResults;

@end

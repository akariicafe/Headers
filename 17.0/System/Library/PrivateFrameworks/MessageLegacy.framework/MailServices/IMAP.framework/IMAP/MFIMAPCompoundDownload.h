@class NSMutableArray;

@interface MFIMAPCompoundDownload : MFIMAPDownload {
    NSMutableArray *_subdownloads;
}

- (BOOL)isComplete;
- (void)dealloc;
- (void)addSubdownload:(id)a0;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (unsigned long long)bytesFetched;
- (unsigned long long)expectedLength;
- (unsigned long long)lengthOfDataBeforeLineConversion;
- (void)processResults;
- (void)removeSubdownload:(id)a0;
- (id)subdownloads;

@end

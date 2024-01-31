@class NSMutableArray;

@interface MFIMAPCommandPipeline : NSObject {
    unsigned long long _chunkSize;
    unsigned long long _expectedSize;
    unsigned char _full : 1;
    unsigned char _sending : 1;
    NSMutableArray *_fetchUnits;
}

- (BOOL)isFull;
- (void)dealloc;
- (BOOL)isSending;
- (unsigned long long)chunkSize;
- (void)setChunkSize:(unsigned long long)a0;
- (void)_removeFetchUnitMatchingResponse:(id)a0;
- (void)addFetchCommandForUid:(unsigned int)a0 fetchItem:(id)a1 expectedLength:(unsigned long long)a2 bodyDataConsumer:(id)a3 consumerSection:(id)a4;
- (unsigned long long)expectedSize;
- (id)failureResponsesFromSendingCommandsWithConnection:(id)a0;
- (void)setFull:(BOOL)a0;

@end

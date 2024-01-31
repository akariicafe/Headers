@class _PASLock, BMStoreConfig;

@interface ATXBiomeBlendingModelStream : NSObject {
    BMStoreConfig *_storeConfig;
    _PASLock *_lock;
}

- (id)publisherFromStartTime:(double)a0;
- (id)initWithStoreConfig:(id)a0;
- (id)init;
- (id)streamIdentifiers;
- (id)publisherFromStartTime:(double)a0 consumerSubType:(unsigned char)a1;
- (id)_innerStreamForStreamId:(id)a0;
- (id)_streamIdForConsumerSubType:(unsigned char)a0;
- (void).cxx_destruct;
- (void)donateBlendingModelUICacheUpdate:(id)a0;
- (id)_validBlendingStreamConsumerSubTypes;
- (id)_innerStreamForConsumerSubType:(unsigned char)a0;
- (id)deprecatedPublisherFromStartTime:(double)a0;

@end

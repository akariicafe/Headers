@class NSString, BMAccessClient, BMStoreConfig, _PASLock;

@interface BMStorePublisherManager : NSObject {
    BMStoreConfig *_config;
    NSString *_streamIdentifier;
    BMAccessClient *_accessClient;
    Class _eventDataClass;
    NSString *_useCase;
    _PASLock *_protectedState;
}

- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisherFromStartTime:(double)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)initWithStreamIdentifier:(id)a0 streamConfig:(id)a1 accessClient:(id)a2;
- (id)publisher;
- (id)_publisherWithStoreLocation:(long long)a0 remoteStreamName:(id)a1;
- (id)publishersForRemoteDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)_openStreamReaderWithStoreLocation:(long long)a0 remoteStreamName:(id)a1 eventDataClass:(Class)a2;
- (id)_publishersForAccounts:(id)a0 devices:(id)a1 deviceTypes:(unsigned int)a2 withUseCase:(id)a3 startTime:(id)a4 endTime:(id)a5 maxEvents:(id)a6 lastN:(id)a7 reversed:(BOOL)a8 includeLocal:(BOOL)a9 pipeline:(id /* block */)a10;
- (id)publishersForDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)_publishersForRemoteDevices:(id)a0 startTime:(id)a1 endTime:(id)a2 maxEvents:(id)a3 lastN:(id)a4 reversed:(BOOL)a5 includeLocal:(BOOL)a6 pipeline:(id /* block */)a7;
- (id)_openStreamReaderWithAccount:(id)a0 storeLocation:(long long)a1 remoteStreamName:(id)a2 eventDataClass:(Class)a3;
- (id)_streamReaderWithStoreLocation:(long long)a0 remoteStreamName:(id)a1;
- (id)_publisherWithAccount:(id)a0 storeLocation:(long long)a1 remoteStreamName:(id)a2;
- (id)publishersForRemoteDevices:(id)a0 startTime:(id)a1 endTime:(id)a2 maxEvents:(id)a3 lastN:(id)a4 reversed:(BOOL)a5 includeLocal:(BOOL)a6 pipeline:(id /* block */)a7;
- (id)publishersForDevices:(id)a0 startTime:(id)a1 endTime:(id)a2 maxEvents:(id)a3 lastN:(id)a4 reversed:(BOOL)a5 includeLocal:(BOOL)a6 pipeline:(id /* block */)a7;
- (id)publishersForAccounts:(id)a0 devices:(id)a1 deviceTypes:(unsigned int)a2 withUseCase:(id)a3 startTime:(id)a4 endTime:(id)a5 maxEvents:(id)a6 lastN:(id)a7 reversed:(BOOL)a8 includeLocal:(BOOL)a9 pipeline:(id /* block */)a10;
- (void).cxx_destruct;
- (id)publisherWithStartTime:(id)a0 withEndTime:(id)a1 withMaxEvents:(id)a2 reversed:(BOOL)a3;
- (id)_publishersForAccount:(id)a0 remoteDevices:(id)a1 includeLocal:(BOOL)a2;
- (id)initWithStreamIdentifier:(id)a0 streamConfig:(id)a1 accessClient:(id)a2 eventDataClass:(Class)a3 useCase:(id)a4;
- (id)_publishersForRemoteDevices:(id)a0 includeLocal:(BOOL)a1;

@end

@class NSObject;
@protocol OS_dispatch_data, OS_nw_error, OS_nw_connection, OS_dispatch_queue;

@interface IDSCapsuleParser : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _state;
    unsigned long long _currentCapsuleType;
    unsigned long long _currentCapsuleLength;
    unsigned long long _currentCapsuleHeaderLength;
    unsigned long long _waitingBodySize;
    unsigned char _headerBuffer[16];
    unsigned char _headerBufferSize;
    NSObject<OS_dispatch_data> *_pendingData;
    NSObject<OS_nw_error> *_pendingError;
    BOOL _processingReadCall;
}

@property (nonatomic) NSObject<OS_nw_connection> *connection;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_parseHeader;
- (void)_readCapsuleWithExistingData:(id)a0 completionHandler:(id /* block */)a1;
- (void)_readHeader:(id)a0 completionHandler:(id /* block */)a1;
- (void)_readWithCompletionHandler:(id /* block */)a0;
- (void)readCapsuleWithCompletionHandler:(id /* block */)a0;

@end

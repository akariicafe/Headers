@class NSOutputStream, NSString, NSMutableDictionary, NSCondition, NSError, NSInputStream, NSObject;
@protocol OS_dispatch_queue;

@interface MFStream : NSObject <NSStreamDelegate, NSURLSessionDelegate> {
    NSInputStream *_rStream;
    NSOutputStream *_wStream;
    NSMutableDictionary *_properties;
    id /* block */ _callback;
    NSObject<OS_dispatch_queue> *_location;
    unsigned long long _capacity;
    unsigned long long _length;
    char *_buffer;
    BOOL _streamCanRead;
    BOOL _streamCanWrite;
    BOOL _dispatchedBytesAvailable;
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
    NSCondition *_condition;
}

@property (readonly, nonatomic) NSError *streamError;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_networkDispatchQueue;
+ (id)networkThread;
+ (void)setNetworkThread:(id)a0;

- (void)close;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (void)dealloc;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (id)propertyForKey:(id)a0;
- (void)_closeAndReleaseStream:(id)a0 logMessage:(id)a1;
- (id)_copyPropertyForKey:(id)a0;
- (void)_createPairWithSocketToHostName:(id)a0 port:(long long)a1;
- (void)_readBytesFromStream;
- (id)initCallBack:(id /* block */)a0 onDispatchQueue:(id)a1;
- (void)openToHostName:(id)a0 port:(long long)a1;

@end

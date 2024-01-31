@class NSOutputStream, NSString, NSMutableDictionary, NSError, NSInputStream, NSObject;
@protocol OS_dispatch_queue;

@interface MFStream : NSObject <NSStreamDelegate, NSURLSessionDelegate> {
    NSInputStream *_rStream;
    NSOutputStream *_wStream;
    NSMutableDictionary *_properties;
    id /* block */ _callback;
    NSObject<OS_dispatch_queue> *_callback_queue;
    unsigned long long _capacity;
    unsigned long long _length;
    char *_buffer;
    BOOL _treatAsDead;
    BOOL _streamCanRead;
    BOOL _streamCanWrite;
    BOOL _dispatchedBytesAvailable;
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
    struct unique_ptr<ctu::OsLogLogger, std::default_delete<ctu::OsLogLogger>> { struct __compressed_pair<ctu::OsLogLogger *, std::default_delete<ctu::OsLogLogger>> { struct OsLogLogger *__value_; } __ptr_; } logger;
    const char *mambaID;
    NSString *rumbaID;
}

@property (readonly, nonatomic) NSError *streamError;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createTheOnlyNetworkThread;
+ (id)theOnlyNetworkThread;

- (void)close;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (void)dealloc;
- (id)__propertyForKey:(id)a0;
- (id).cxx_construct;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;
- (void)_closeAndReleaseStream:(id)a0 logMessage:(id)a1;
- (void)_createPairWithSocketToHostName:(id)a0 port:(long long)a1;
- (void)_readBytesFromStream;
- (void)openToHostName:(id)a0 port:(long long)a1;
- (BOOL)__setProperty:(id)a0 forKey:(id)a1;
- (long long)__write:(const char *)a0 maxLength:(unsigned long long)a1;
- (void)__close;
- (void)__openToHostName:(id)a0 port:(long long)a1;
- (long long)__read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)indicateEnd;
- (id)initWithMambaID:(const char *)a0 rumba:(id)a1 callBack:(id /* block */)a2 onDispatchQueue:(id)a3;

@end

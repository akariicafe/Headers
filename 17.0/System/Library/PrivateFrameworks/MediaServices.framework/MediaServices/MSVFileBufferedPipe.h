@class NSMutableSet, NSFileHandle, NSPipe, NSObject, NSData;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface MSVFileBufferedPipe : NSObject {
    NSFileHandle *_writeBufferFileHandle;
    NSFileHandle *_readBufferFileHandle;
    NSPipe *_inputPipe;
    NSPipe *_outputPipe;
    NSObject<OS_dispatch_source> *_writeSource;
    NSObject<OS_dispatch_source> *_readSource;
    BOOL _readyForData;
    BOOL _hasBufferedData;
    BOOL _readSourceClosed;
    NSData *_dataPendingWrite;
    unsigned int _dataPendingOffset;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_uniqueWriteErrors;
    long long _writeSourceState;
}

@property (readonly, retain, nonatomic) NSFileHandle *fileHandleForReading;
@property (readonly, retain, nonatomic) NSFileHandle *fileHandleForWriting;

+ (id)pipe;

- (id)init;
- (void).cxx_destruct;
- (void)_createBufferFiles;
- (void)_inputReadyForReading:(unsigned long long)a0;
- (void)_outputReadyForWriting:(unsigned long long)a0;
- (void)_writeBufferedData;

@end

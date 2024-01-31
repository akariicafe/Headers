@class ASDStreamFormat, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ASDManagedRingBuffer : ASDRingBuffer <ASDManagedRingBuffer> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) BOOL readerRunning;
@property (nonatomic) BOOL writerRunning;
@property (nonatomic) long long frameCapacity;
@property (copy, nonatomic) ASDStreamFormat *writeFormat;
@property (copy, nonatomic) ASDStreamFormat *readFormat;
@property (readonly, nonatomic) id /* block */ writeBlock;
@property (readonly, nonatomic) id /* block */ readBlock;
@property (readonly, nonatomic) id /* block */ readWithZerosBlock;
@property (readonly, nonatomic, getter=isAllocated) BOOL allocated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrameCapacity:(long long)a0 writeFormat:(id)a1 readFormat:(id)a2;
- (void)startReader;
- (void)startWriter;
- (void)stopReader;
- (void)stopWriter;

@end

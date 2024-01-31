@class ASDStreamFormat, NSString;

@interface ASDRingBuffer : NSObject <ASDRingBuffer> {
    struct unique_ptr<AudioRingBuffer, std::default_delete<AudioRingBuffer>> { struct __compressed_pair<AudioRingBuffer *, std::default_delete<AudioRingBuffer>> { struct AudioRingBuffer *__value_; } __ptr_; } _ringBuffer;
}

@property (nonatomic, getter=isAllocated) BOOL allocated;
@property (nonatomic) long long frameCapacity;
@property (copy, nonatomic) ASDStreamFormat *writeFormat;
@property (copy, nonatomic) ASDStreamFormat *readFormat;
@property (readonly, nonatomic) id /* block */ writeBlock;
@property (readonly, nonatomic) id /* block */ readBlock;
@property (readonly, nonatomic) id /* block */ readWithZerosBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allocate;
- (void)deallocate;
- (id)initWithFrameCapacity:(long long)a0;
- (id)initWithFrameCapacity:(long long)a0 writeFormat:(id)a1 readFormat:(id)a2;

@end

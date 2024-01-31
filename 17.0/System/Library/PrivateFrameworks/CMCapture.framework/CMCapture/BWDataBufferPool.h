@class NSString, NSDictionary;
@protocol BWDataBufferBackedFormat;

@interface BWDataBufferPool : NSObject {
    id<BWDataBufferBackedFormat> _format;
    unsigned long long _capacity;
    NSString *_name;
    BOOL _clientProvidesPool;
    NSDictionary *_additionalDataBufferAttributes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataBufferPoolConfigurationLock;
    struct __CVDataBufferPool { } *_dataBufferPool;
    NSDictionary *_dataBufferPoolAuxAttributes;
    int _dataBufferPoolCreateError;
}

@property (readonly) NSString *name;
@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) unsigned int dataFormat;
@property (readonly, nonatomic) struct __CVDataBufferPool { } *cvDataBufferPool;
@property (readonly, nonatomic) struct __CFDictionary { } *cvDataBufferPoolAuxAttributes;

+ (void)initialize;

- (void)setCapacity:(unsigned long long)a0;
- (void)dealloc;
- (void)enumerateSurfacesUsingBlock:(id /* block */)a0;
- (void)prefetchWithCompletionHandler:(id /* block */)a0;
- (void)flushToMinimumCapacity:(unsigned long long)a0;
- (void)setCVDataBufferPool:(struct __CVDataBufferPool { } *)a0 attributes:(struct __CFDictionary { } *)a1;
- (id)initWithFormat:(id)a0 capacity:(unsigned long long)a1 name:(id)a2 clientProvidesPool:(BOOL)a3;
- (struct __CVBuffer { } *)newDataBuffer;

@end

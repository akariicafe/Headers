@class MDLMeshBufferMap;

@interface MDLVertexAttributeData : NSObject {
    MDLMeshBufferMap *_map;
    void *_dataStart;
    unsigned long long _stride;
    unsigned long long _format;
}

@property (retain, nonatomic) MDLMeshBufferMap *map;
@property (nonatomic) void *dataStart;
@property (nonatomic) unsigned long long stride;
@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long bufferSize;

- (id)init;
- (void).cxx_destruct;
- (void)setbufferSize:(unsigned long long)a0;

@end

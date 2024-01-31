@interface NGMRollingBitmaskBuffer : NSObject

@property unsigned int upper_buffer_index;
@property char *valid_values_buffer;
@property unsigned int valid_values_buffer_size;

- (id)init;
- (void)dealloc;
- (id)bufferData;
- (id)initWithData:(id)a0 upperBufferIndex:(unsigned int)a1;
- (BOOL)processIncomingCounter:(unsigned int)a0;

@end

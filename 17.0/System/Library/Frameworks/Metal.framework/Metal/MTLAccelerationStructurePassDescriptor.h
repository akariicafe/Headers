@class MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray;

@interface MTLAccelerationStructurePassDescriptor : NSObject <NSCopying>

@property (readonly) MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)accelerationStructurePassDescriptor;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)convertToComputePassDescriptor;

@end

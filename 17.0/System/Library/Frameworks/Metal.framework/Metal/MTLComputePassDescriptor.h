@class MTLComputePassSampleBufferAttachmentDescriptorArray;

@interface MTLComputePassDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long dispatchType;
@property (readonly) MTLComputePassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)computePassDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

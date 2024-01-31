@class MTLBlitPassSampleBufferAttachmentDescriptorArray;

@interface MTLBlitPassDescriptor : NSObject <NSCopying>

@property (readonly) MTLBlitPassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)blitPassDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

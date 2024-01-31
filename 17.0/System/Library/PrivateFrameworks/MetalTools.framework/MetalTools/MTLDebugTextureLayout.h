@class MTLTextureDescriptor, MTLDebugDevice;

@interface MTLDebugTextureLayout : MTLToolsTextureLayout

@property (readonly, nonatomic) MTLDebugDevice *debugDevice;
@property (readonly, copy, nonatomic) MTLTextureDescriptor *descriptor;

- (void)dealloc;
- (id)initWithBaseTextureLayout:(id)a0 device:(id)a1 descriptor:(id)a2;

@end

@class PXGColorLookupCube;

@interface _PXStoryConcreteCompanionColorEffect : NSObject <PXStoryCompanionColorEffect>

@property (readonly, nonatomic) PXGColorLookupCube *colorLookupCube;

- (void).cxx_destruct;
- (id)createMetalTextureWithDevice:(id)a0;
- (id)initWithColorLookupCube:(id)a0;

@end

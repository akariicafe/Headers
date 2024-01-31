@class NSString, CUINamedTexture;
@protocol TXRBufferAllocator;

@interface _CUTextureLink : NSObject <TXRDataSourceProvider> {
    CUINamedTexture *_namedTexture;
    id<TXRBufferAllocator> _bufferAllocator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)bufferAllocator;
- (id)namedTexture;
- (id)provideImageInfoAtLevel:(unsigned long long)a0 element:(unsigned long long)a1 face:(unsigned long long)a2;
- (id)provideTextureInfo;
- (void)setBufferAllocator:(id)a0;
- (void)setNamedTexture:(id)a0;

@end

@class NSString;

@interface AVRemoteFigSampleBufferRenderSynchronizerFactory : NSObject <AVFigSampleBufferRenderSynchronizerFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct OpaqueFigSampleBufferRenderSynchronizer { } *)createRenderSynchronizerWithAllocator:(struct __CFAllocator { } *)a0 options:(struct __CFDictionary { } *)a1 error:(id *)a2;

@end

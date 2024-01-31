@class NSString;

@interface AVFigSampleBufferAudioRendererFactory : NSObject <AVFigSampleBufferAudioRendererFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct OpaqueFigSampleBufferAudioRenderer { } *)createAudioRendererWithAllocator:(struct __CFAllocator { } *)a0 options:(struct __CFDictionary { } *)a1 error:(id *)a2;

@end

@class NSString;

@interface FigRemoteRoutingContextFactory : NSObject <FigRoutingContextFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)createRemoteMusicControllerContextWithAllocator:(struct __CFAllocator { } *)a0 options:(struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)copySystemAudioContextWithAllocator:(struct __CFAllocator { } *)a0 options:(struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)createVideoContextWithAllocator:(struct __CFAllocator { } *)a0 options:(struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)copySystemRemotePoolContextWithAllocator:(struct __CFAllocator { } *)a0 options:(struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)createPerAppSecondDisplayContextWithAllocator:(struct __CFAllocator { } *)a0 options:(struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)copyContextForUUIDWithAllocator:(struct __CFAllocator { } *)a0 options:(struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)copySystemMusicContextWithAllocator:(struct __CFAllocator { } *)a0 options:(struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)copySidePlayContextWithAllocator:(struct __CFAllocator { } *)a0 options:(struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)createAudioContextWithAllocator:(struct __CFAllocator { } *)a0 options:(struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)copyAllAudioContexts:(const struct __CFArray **)a0;
- (int)createControlChannelOnlyContextWithAllocator:(struct __CFAllocator { } *)a0 options:(struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)copySystemMirroringContextWithAllocator:(struct __CFAllocator { } *)a0 options:(struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)copyDisplayMenuVideoContextWithAllocator:(struct __CFAllocator { } *)a0 options:(struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;

@end

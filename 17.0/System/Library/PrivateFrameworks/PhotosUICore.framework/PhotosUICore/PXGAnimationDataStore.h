@class NSIndexSet, NSString, NSMutableIndexSet;

@interface PXGAnimationDataStore : NSObject <PXGDiagnosticsProvider> {
    unsigned int _spriteCapacity;
    unsigned short _groupCapacity;
    unsigned int _mappedSpriteCapacity;
    unsigned short _mappedAnimationCapacity;
    NSMutableIndexSet *_activeGroupIndexes;
}

@property (nonatomic) unsigned int spriteCount;
@property (readonly, nonatomic) struct { struct { double x0; double x1; float x2; } x0; struct { double x0; double x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; struct { float x0; float x1; float x2; } x4; struct { float x0; float x1; float x2; } x5; struct { float x0; float x1; float x2; } x6; struct { float x0; float x1; float x2; } x7; struct { float x0; float x1; float x2; } x8; struct { float x0; float x1; float x2; } x9; struct { float x0; float x1; float x2; } x10; struct { float x0; float x1; float x2; } x11; struct { float x0; float x1; float x2; } x12; struct { float x0; float x1; float x2; } x13; struct { float x0; float x1; float x2; } x14; struct { float x0; float x1; float x2; } x15; struct { float x0; float x1; float x2; } x16; struct { float x0; float x1; float x2; } x17; struct { float x0; float x1; float x2; } x18; struct { float x0; float x1; float x2; } x19; struct { float x0; float x1; float x2; } x20; struct { float x0; float x1; float x2; } x21; struct { float x0; float x1; float x2; } x22; struct { float x0; float x1; float x2; } x23; unsigned short x24; unsigned char x25; } *spriteInfos;
@property (readonly, copy, nonatomic) NSIndexSet *activeGroupIndexes;
@property (readonly, nonatomic) struct { long long x0; double x1; double x2; float x3; struct { float x0; float x1; float x2; float x3; } x4; void *x5; void *x6; void *x7; void *x8; } *groupInfos;
@property (nonatomic) unsigned int mappedSpriteCount;
@property (readonly, nonatomic) unsigned short *animationIndexBySpriteIndex;
@property (nonatomic) unsigned short mappedAnimationCount;
@property (readonly, nonatomic) unsigned short *groupIndexByAnimationIndex;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)checkInGroupAtIndexes:(id)a0;
- (unsigned short)checkOutGroup;
- (id)spriteIndexesExpiringAtTime:(double)a0;
- (void)_resizeStorageToGroupIndex:(unsigned short)a0;
- (void).cxx_destruct;
- (void)applySpriteChangeDetails:(id)a0;
- (void)increaseMappedSpriteCountBy:(unsigned int)a0 usingAnimationIndex:(unsigned short)a1;

@end

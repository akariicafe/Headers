@interface CCCharBoxContext : NSObject

@property float *floatVectorSumProd;
@property char *pulseVectorHeightCharBox;
@property char *pulseVectorHeightCharBoxAdaptive;
@property unsigned long long *charBoxFlags;
@property unsigned short *charboxROIFullVectorRowStart;
@property unsigned short *charboxROIFullVectorHeight2;
@property unsigned int allocationSize;
@property float mTop;
@property float mBottom;
@property float bTop;
@property float bBottom;
@property float posUL;
@property float posLL;
@property float posUR;
@property float posLR;
@property unsigned short medianHeightTop;
@property unsigned short medianHeightBottom;
@property short loopBigBox;
@property short loopBigBoxPrev;
@property unsigned short filterWalkUpDownCount;

- (void)dealloc;
- (void)copyFlagValue:(unsigned long long)a0 toTarget:(unsigned long long)a1 atIndex:(unsigned int)a2;
- (unsigned int)checkFlag:(unsigned long long)a0 atIndex:(unsigned int)a1;
- (void)clearFlag:(unsigned long long)a0 atIndex:(unsigned int)a1;
- (BOOL)makeAllocationsForWidth:(unsigned long long)a0;
- (void)releaseAllocations;
- (void)resetBoxBounds;
- (void)setFlag:(unsigned long long)a0 atIndex:(unsigned int)a1;

@end

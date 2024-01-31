@class NSArray;

@interface TSWPIterativeAttachmentPositioningState : NSObject

@property (readonly, nonatomic) unsigned long long passCount;
@property (readonly, nonatomic) NSArray *passPositions;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } position;
@property (readonly, nonatomic) double mismatch;
@property (readonly, nonatomic) double smallestMismatch;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bestPosition;

- (id)init;
- (void)dealloc;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0 mismatch:(double)a1 afterLoop:(BOOL)a2;
- (BOOL)hasLoopInLastPasses;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0 mismatch:(double)a1;

@end

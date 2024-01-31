@class NSMutableArray;

@interface SignpostRenderAccumulatedState : NSObject

@property (readonly, nonatomic) unsigned int frameSeed;
@property (retain, nonatomic) NSMutableArray *imageQueueSampleEvents;
@property (retain, nonatomic) NSMutableArray *clientDrawableIntervals;

- (void).cxx_destruct;
- (id)initWithFrameSeed:(unsigned int)a0;

@end

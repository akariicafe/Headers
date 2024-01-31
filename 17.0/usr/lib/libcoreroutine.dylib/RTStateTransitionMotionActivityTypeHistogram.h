@class NSMutableDictionary;

@interface RTStateTransitionMotionActivityTypeHistogram : NSObject

@property (retain, nonatomic) NSMutableDictionary *motionActivityTypeBins;

- (id)init;
- (void)show;
- (void).cxx_destruct;
- (void)addMotionActivityType:(unsigned long long)a0;
- (unsigned long long)getDominantMotionActivityType;

@end

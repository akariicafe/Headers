@class NSMutableArray;

@interface SVTimeline : NSObject {
    double _duration;
    double _time;
    NSMutableArray *_actions;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end

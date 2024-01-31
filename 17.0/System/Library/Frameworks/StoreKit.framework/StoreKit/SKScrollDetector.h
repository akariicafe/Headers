@class NSMutableArray;
@protocol SKScreenTrackingDelegate;

@interface SKScrollDetector : NSObject

@property (retain, nonatomic) NSMutableArray *subscribedScrollers;
@property (weak, nonatomic) id<SKScreenTrackingDelegate> screenTrakingDelegate;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)findAndListenForScrollingOfView:(id)a0;
- (void)stopListeningForScrollingOfView:(id)a0;

@end

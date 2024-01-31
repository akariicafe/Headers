@class NSString, NSMutableArray, MPWeakTimer;
@protocol MRUCoordinatedUpdateControllerDelegate;

@interface MRUCoordinatedUpdateController : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) MPWeakTimer *timer;
@property (weak, nonatomic) id<MRUCoordinatedUpdateControllerDelegate> delegate;
@property (copy, nonatomic) NSString *context;
@property (nonatomic) double cadence;

- (void)setupTimer;
- (void)resetTimer;
- (id)init;
- (void).cxx_destruct;
- (void)addUpdate:(id /* block */)a0 completion:(id /* block */)a1;
- (void)processQueue;

@end

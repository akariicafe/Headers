@class SASPresentationState, NSTimer, NSMutableArray, SASPresentationServer;

@interface SASPresentationModel : NSObject

@property (readonly, nonatomic) SASPresentationServer *presentationServer;
@property (nonatomic) long long requestState;
@property (retain, nonatomic) NSMutableArray *enqueuedButtonEventCompletions;
@property (retain, nonatomic) NSTimer *pingTimer;
@property (retain, nonatomic) SASPresentationState *presentationState;

- (void)flushEnqueuedButtonEventCompletions;
- (void).cxx_destruct;
- (id)initWithPresentationServer:(id)a0;

@end

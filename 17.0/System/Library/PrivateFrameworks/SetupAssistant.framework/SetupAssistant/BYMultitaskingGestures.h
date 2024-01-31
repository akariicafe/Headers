@class BYPreferencesController;

@interface BYMultitaskingGestures : NSObject

@property (retain, nonatomic) BYPreferencesController *preferencesController;
@property (readonly, nonatomic) BOOL multitaskingWasCompleted;
@property (readonly, nonatomic) BOOL multitaskingWasTurnedOff;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPreferencesController:(id)a0;
- (void)setMultitaskingWasTurnedOff:(BOOL)a0;

@end

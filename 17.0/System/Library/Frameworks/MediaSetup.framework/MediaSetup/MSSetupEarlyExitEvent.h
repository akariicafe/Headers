@class NSString;

@interface MSSetupEarlyExitEvent : MSBaseSetupEvent

@property (retain, nonatomic) NSString *serviceID;
@property (retain, nonatomic) NSString *exitReason;
@property (nonatomic) BOOL didEncounterError;

- (id)encoded;
- (void).cxx_destruct;
- (id)initWithExitReason:(id)a0 didEncounterError:(BOOL)a1;

@end

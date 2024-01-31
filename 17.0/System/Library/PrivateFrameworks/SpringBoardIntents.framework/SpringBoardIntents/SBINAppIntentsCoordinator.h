@protocol SBINAppIntentsCoordinatorDelegate;

@interface SBINAppIntentsCoordinator : NSObject

@property (class, readonly, nonatomic) SBINAppIntentsCoordinator *sharedSystemCoordinator;

@property (weak, nonatomic) id<SBINAppIntentsCoordinatorDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)performAppIntent:(id)a0 withCompletion:(id /* block */)a1;

@end

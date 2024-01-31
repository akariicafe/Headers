@class NSString;

@interface VSErrorRecoveryOption : NSObject

@property (copy, nonatomic) NSString *localizedAlertButtonTitle;
@property (copy, nonatomic) id /* block */ attemptHandler;
@property (nonatomic, getter=isDestructive) BOOL destructive;

- (void).cxx_destruct;

@end

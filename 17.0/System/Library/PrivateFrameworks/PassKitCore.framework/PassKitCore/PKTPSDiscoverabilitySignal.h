@class NSString;

@interface PKTPSDiscoverabilitySignal : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *context;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)donateSignalWithCompletion:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 context:(id)a2;

@end

@class NSObject;
@protocol STRootViewModelCoordinator;

@interface STUsageGroupSpecifierProvider : STGroupSpecifierProvider

@property (retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;

+ (id)providerWithCoordinator:(id)a0;

- (void)invalidate;
- (void).cxx_destruct;

@end

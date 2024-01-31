@class NSObject;
@protocol STRootViewModelCoordinator;

@interface STRootGroupSpecifierProvider : STGroupSpecifierProvider

@property (retain) NSObject<STRootViewModelCoordinator> *coordinator;

+ (id)providerWithCoordinator:(id)a0;

- (void)invalidate;
- (void).cxx_destruct;

@end

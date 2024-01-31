@class NSString;
@protocol SWNavigationManager;

@interface SWActionFactory : NSObject <SWActionFactory>

@property (readonly, nonatomic) id<SWNavigationManager> navigationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)actionForDictionary:(id)a0;
- (id)initWithNavigationManager:(id)a0;

@end

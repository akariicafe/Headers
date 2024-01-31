@class NSString;
@protocol SWNavigationManager;

@interface SWInteractionFactory : NSObject <SWInteractionFactory>

@property (readonly, nonatomic) id<SWNavigationManager> navigationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNavigationManager:(id)a0;
- (id)interactionForDictionary:(id)a0;

@end

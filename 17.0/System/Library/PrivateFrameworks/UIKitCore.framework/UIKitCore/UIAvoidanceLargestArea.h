@class NSString;

@interface UIAvoidanceLargestArea : NSObject <UIAvoidanceClientDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)avoid:(id)a0 forClient:(id)a1 withCoordinator:(id)a2;

@end

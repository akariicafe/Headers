@class NSError;
@protocol HAP2AccessoryServerCoordinatorPrivate;

@interface HAP2AccessoryServerBrowserCoordinatorInfo : NSObject

@property (readonly, nonatomic) id<HAP2AccessoryServerCoordinatorPrivate> coordinator;
@property (retain, nonatomic) NSError *error;

- (id)initWithCoordinator:(id)a0;
- (void).cxx_destruct;

@end

@class NSNumber;

@interface LBFTrialEvent : NSObject

@property (readonly, nonatomic) NSNumber *succeeded;
@property (readonly, nonatomic) long long eventType;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithActivation:(BOOL)a0;
- (id)initWithAllocation:(BOOL)a0;
- (id)initWithDeactivation:(BOOL)a0;

@end

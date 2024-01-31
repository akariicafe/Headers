@class NSMutableSet, NSObject;
@protocol TSDTrackerManipulator;

@interface TSDTrackerManipulatorCoordinator : NSObject {
    NSMutableSet *mRegisteredTMs;
}

@property (readonly, nonatomic) NSObject<TSDTrackerManipulator> *controllingTM;

+ (void)p_dynamicallySubclassGRForNotification:(id)a0;
+ (void)p_removeDynamicSubclass:(id)a0;

- (id)init;
- (void)dealloc;
- (void)operationDidEnd;
- (BOOL)hasRegisteredTrackerManipulator:(id)a0;
- (void)operationWillEnd;
- (void)p_notifyControlChange;
- (void)registerTrackerManipulator:(id)a0;
- (BOOL)relinquishTrackerManipulatorControl:(id)a0;
- (BOOL)takeControlWithTrackerManipulator:(id)a0;
- (void)unregisterTrackerManipulator:(id)a0;

@end

@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MaintenanceActivity : NSObject

@property (copy, nonatomic) id /* block */ activityBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activityQueue;
@property (retain, nonatomic) NSString *activityIdentifier;

- (void).cxx_destruct;

@end

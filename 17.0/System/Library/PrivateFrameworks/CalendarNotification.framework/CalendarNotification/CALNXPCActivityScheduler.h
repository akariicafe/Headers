@class NSString, NSObject;
@protocol OS_xpc_object, CALNActivitySchedulerDelegate;

@interface CALNXPCActivityScheduler : NSObject <CALNActivityScheduler> {
    NSString *_activityIdentifier;
    NSObject<OS_xpc_object> *_otherCriteria;
}

@property (weak, nonatomic) id<CALNActivitySchedulerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

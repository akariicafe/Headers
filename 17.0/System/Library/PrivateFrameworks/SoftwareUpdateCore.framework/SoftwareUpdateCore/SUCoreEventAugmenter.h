@class NSObject, SUCoreDescriptor, SUCorePolicy;
@protocol OS_dispatch_queue;

@interface SUCoreEventAugmenter : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property (retain, nonatomic) SUCorePolicy *policy;
@property (retain, nonatomic) SUCoreDescriptor *primaryDescriptor;
@property (retain, nonatomic) SUCoreDescriptor *alternateDescriptor;

+ (void)augmentEvent:(id)a0 withDescriptor:(id)a1;
+ (void)augmentEvent:(id)a0 withDescriptor:(id)a1 specifyAlternateUpdate:(BOOL)a2;
+ (void)augmentEvent:(id)a0 withPolicy:(id)a1;
+ (void)augmentEvent:(id)a0 withPolicy:(id)a1 primaryDescriptor:(id)a2 alternateDescriptor:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (void)augmentEvent:(id)a0;

@end

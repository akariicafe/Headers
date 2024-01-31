@class NSObject;
@protocol OS_dispatch_queue;

@interface BLTSectionInfoSyncAlertingSectionState : NSObject

@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ clientCompletion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (id)description;
- (void).cxx_destruct;

@end

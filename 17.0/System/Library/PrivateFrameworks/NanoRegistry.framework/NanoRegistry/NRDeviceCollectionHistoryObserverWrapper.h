@class NSObject;
@protocol OS_dispatch_queue;

@interface NRDeviceCollectionHistoryObserverWrapper : NSObject

@property (copy, nonatomic) id /* block */ observer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;

@end

@class HMFTimer, NSString, NSArray, CUBLEScanner, HAPBTLECentralManager, NSObject, HMDAccessoryQueues;
@protocol OS_dispatch_queue;

@interface BTLEScanner : HMFObject <HMFTimerDelegate, HAPBTLECentralManagerDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFTimer *_scanTimer;
    CUBLEScanner *_cubleScanner;
    HAPBTLECentralManager *_centralManager;
    HMDAccessoryQueues *_scanQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

@end

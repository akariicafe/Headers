@class NSString, PFUbiquityLocation, PFUbiquityContainerIdentifier, NSObject;
@protocol NSObject, NSCoding, OS_dispatch_queue, NSCopying;

@interface PFUbiquityContainerMonitor : NSObject {
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    int _containerState;
    int _monitorState;
    BOOL _hasScheduledCheckBlock;
    int _scheduleSpinLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
    id<NSObject, NSCopying, NSCoding> _currentIdentityToken;
    PFUbiquityContainerIdentifier *_containerIdentifier;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (void)_applicationResumed:(id)a0;
- (void)containerDeleteDetected:(id)a0;
- (id)initWithProcessingQueue:(id)a0 localPeerID:(id)a1 storeName:(id)a2 andUbiquityRootLocation:(id)a3;
- (void)ubiquityIdentityChanged:(id)a0;

@end

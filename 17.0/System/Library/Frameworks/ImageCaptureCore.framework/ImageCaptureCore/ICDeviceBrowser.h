@class NSArray, NSMutableArray;
@protocol ICDeviceBrowserDelegate;

@interface ICDeviceBrowser : NSObject

@property (getter=isBrowsing) BOOL browsing;
@property (retain) NSMutableArray *internalDevices;
@property unsigned long long internalBrowsedDeviceTypeMask;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } devicesLock;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property id<ICDeviceBrowserDelegate> delegate;
@property unsigned long long browsedDeviceTypeMask;
@property (readonly) NSArray *devices;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (id)preferredDevice;
- (BOOL)containsDevice:(id)a0;
- (void)addDevice:(id)a0 moreComing:(BOOL)a1;
- (id)contentsAuthorizationStatus;
- (id)controlAuthorizationStatus;
- (id)deviceWithRef:(id)a0;
- (void)removeDevice:(id)a0 moreGoing:(BOOL)a1;
- (void)requestContentsAuthorizationWithCompletion:(id /* block */)a0;
- (void)requestControlAuthorizationWithCompletion:(id /* block */)a0;
- (void)resetContentsAuthorizationWithCompletion:(id /* block */)a0;
- (void)resetControlAuthorizationWithCompletion:(id /* block */)a0;

@end

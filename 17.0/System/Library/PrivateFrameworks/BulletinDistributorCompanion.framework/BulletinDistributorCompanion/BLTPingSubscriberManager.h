@class NSXPCListener, NSString, BLTBulletinDistributorSubscriberList;
@protocol BLTBulletinDistributorSubscriberDeviceDelegate;

@interface BLTPingSubscriberManager : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCListener *listener;
@property (weak, nonatomic) id<BLTBulletinDistributorSubscriberDeviceDelegate> deviceDelegate;
@property (retain, nonatomic) BLTBulletinDistributorSubscriberList *subscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

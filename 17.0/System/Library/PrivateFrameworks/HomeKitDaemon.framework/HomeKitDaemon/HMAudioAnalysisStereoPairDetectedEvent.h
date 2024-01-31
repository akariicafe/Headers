@class NSUUID, HMDAppleMediaAccessory, HMAudioAnalysisEventBulletin;

@interface HMAudioAnalysisStereoPairDetectedEvent : NSObject

@property (copy) HMAudioAnalysisEventBulletin *event;
@property unsigned long long state;
@property (copy) NSUUID *notificationUUID;
@property (copy) HMDAppleMediaAccessory *accessory;

- (void).cxx_destruct;
- (id)initWithEventBulletin:(id)a0 accessory:(id)a1 notificationUUID:(id)a2;

@end

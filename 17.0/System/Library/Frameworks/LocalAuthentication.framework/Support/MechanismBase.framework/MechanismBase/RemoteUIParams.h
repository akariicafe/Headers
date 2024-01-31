@class NSData, MechanismUI, NSNumber;
@protocol RemoteUINotificationCenter, LARemoteUIHost, LAUIMechanism;

@interface RemoteUIParams : NSObject

@property (retain, nonatomic) MechanismUI<LAUIMechanism, LARemoteUIHost> *uiMechanism;
@property (retain, nonatomic) NSData *auditTokenData;
@property (nonatomic) BOOL forSoftwareUpdate;
@property (nonatomic) BOOL forSiri;
@property (nonatomic) int pid;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) id<RemoteUINotificationCenter> notificationCenter;

- (id)description;
- (void).cxx_destruct;

@end

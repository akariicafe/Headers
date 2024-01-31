@class IODConnection, TSDXgPTPPort, IOKNotificationPort, IOKInterestNotification, IOKService, NSObject;
@protocol OS_dispatch_queue;

@interface TSDgPTPPort : NSObject {
    IOKService *_service;
    IOKNotificationPort *_notificationPort;
    IOKInterestNotification *_generalInterestNotification;
    BOOL _updatePropertiesOnPropertyChange;
}

@property (nonatomic) unsigned short portNumber;
@property (nonatomic) int portRole;
@property (nonatomic) unsigned long long clockIdentifier;
@property (readonly, nonatomic) IOKService *service;
@property (readonly, nonatomic) IODConnection *connection;
@property (weak, nonatomic) TSDXgPTPPort *xpcPort;
@property (readonly, nonatomic) int portType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue;

+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
+ (id)diagnosticInfoForService:(id)a0;
+ (id)gPTPPortWithClockIdentifier:(unsigned long long)a0 portNumber:(unsigned short)a1;
+ (id)gPTPPortWithService:(id)a0;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
+ (id)iokitMatchingDictionaryForPortClass:(id)a0 clockIdentifier:(unsigned long long)a1 andPortNumber:(unsigned short)a2;

- (int)portType;
- (id)init;
- (id)initWithService:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_clockIdentifier;
- (unsigned short)_portNumber;
- (int)_portRole;
- (void)finalizeNotifications;
- (id)initWithService:(id)a0 pid:(int)a1;
- (id)propertiesForXPC;
- (void)serviceTerminated;
- (BOOL)startAutomaticPropertyUpdates;
- (BOOL)stopAutomaticPropertyUpdates;
- (void)updateProperties;

@end

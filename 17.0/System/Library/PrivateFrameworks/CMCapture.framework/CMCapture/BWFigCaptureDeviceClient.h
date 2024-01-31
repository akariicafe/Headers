@class NSString;

@interface BWFigCaptureDeviceClient : NSObject

@property (readonly, nonatomic) int clientID;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) NSString *clientDescription;
@property (readonly, nonatomic) int clientPriority;
@property (readonly, nonatomic) BOOL canStealFromClientsWithSamePriority;
@property (readonly, nonatomic) BOOL deviceSharingWithOtherClientsAllowed;
@property (copy, nonatomic) id /* block */ deviceAvailabilityChangedHandler;

- (void)dealloc;
- (BOOL)canShareRegistrationWithClientPID:(int)a0 deviceAvailabilityChangedHandler:(id /* block */)a1;
- (id)initWithPID:(int)a0 clientApplicationID:(id)a1 clientDescription:(id)a2 clientPriority:(int)a3 canStealFromClientsWithSamePriority:(BOOL)a4 deviceSharingWithOtherClientsAllowed:(BOOL)a5 deviceAvailabilityChangedHandler:(id /* block */)a6;
- (id)description;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;

@end

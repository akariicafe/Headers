@class NSNumber, NSString, SARemoteDevice;
@protocol SAHandoffPayload;

@interface SAInitiateHandoffOnCompanion : SABaseClientBoundCommand

@property (retain, nonatomic) id<SAHandoffPayload> handoffPayload;
@property (copy, nonatomic) NSNumber *isSiriXRequest;
@property (copy, nonatomic) NSString *lockScreenText;
@property (copy, nonatomic) NSString *lockScreenTextDialogIdentifier;
@property (copy, nonatomic) NSString *notificationText;
@property (copy, nonatomic) NSString *notificationTextDialogIdentifier;
@property (retain, nonatomic) SARemoteDevice *targetDevice;

+ (id)initiateHandoffOnCompanion;
+ (id)initiateHandoffOnCompanionWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end

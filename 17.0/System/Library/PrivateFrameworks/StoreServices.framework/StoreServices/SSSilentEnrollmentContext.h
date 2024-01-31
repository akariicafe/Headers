@class NSNumber, NSString, NSData;

@interface SSSilentEnrollmentContext : NSObject <SSXPCCoding>

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *headerADSID;
@property (copy, nonatomic) NSString *headerGSToken;
@property (copy, nonatomic) NSString *headerGuid;
@property (copy, nonatomic) NSString *headerMMeClientInfo;
@property (copy, nonatomic) NSString *headerMMeDeviceId;
@property (copy, nonatomic) NSData *parameters;
@property (copy, nonatomic) NSString *URLString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

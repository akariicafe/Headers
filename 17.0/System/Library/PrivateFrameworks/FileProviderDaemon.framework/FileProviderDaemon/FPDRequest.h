@class NSString, NSDate;

@interface FPDRequest : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSString *userProcessName;
@property (readonly, nonatomic) NSString *executablePath;
@property (readonly, nonatomic, getter=isFromPOSIX) BOOL fromPOSIX;
@property (nonatomic) BOOL selectedForMaterialization;
@property (nonatomic) BOOL shouldFailCoordinationIfDownloadRequired;
@property (nonatomic) struct { long long location; long long length; } requestedExtent;
@property (nonatomic) struct { long long location; long long length; } providedExtent;
@property (readonly, nonatomic) NSString *shortDescription;
@property (nonatomic) BOOL allowsResurrection;
@property (nonatomic, getter=isProviderInitiated) BOOL providerInitiated;
@property (readonly, nonatomic) unsigned int qos;
@property (readonly, nonatomic) NSDate *date;
@property (nonatomic) struct { unsigned int val[8]; } audit_token;

+ (id)requestForPID:(int)a0;
+ (id)requestForSelf;
+ (id)requestForPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 fromPOSIX:(BOOL)a2 kernelFileInfo:(id)a3;
+ (id)requestForXPCConnection:(id)a0;
+ (id)requestForPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 fromPOSIX:(BOOL)a2;
+ (id)requestForPID:(int)a0 fromPOSIX:(BOOL)a1 kernelFileInfo:(id)a2;
+ (id)UUIDForExecutablePath:(id)a0;
+ (id)fixupProcessName:(id)a0;
+ (id)requestForPID:(int)a0 fromPOSIX:(BOOL)a1;

- (id)initWithPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 fromPOSIX:(BOOL)a2 withExtent:(struct { long long x0; long long x1; })a3;
- (BOOL)isPermittedToAttributeRequestingExecutable:(id)a0;
- (id)description;
- (id)nsfpRequestForSession:(id)a0;
- (void).cxx_destruct;
- (id)nsfpRequestForSession:(id)a0 isSpeculative:(BOOL)a1;

@end

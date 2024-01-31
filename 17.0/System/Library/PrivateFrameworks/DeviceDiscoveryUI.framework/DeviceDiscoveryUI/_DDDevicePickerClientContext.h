@class NSString;

@interface _DDDevicePickerClientContext : NSObject <BSXPCSecureCoding>

@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

@end

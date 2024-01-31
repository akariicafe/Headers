@class NSString, BSMachPortSendRight;

@interface SBSFocusModesHomeScreenSnapshot : NSObject <BSXPCSecureCoding>

@property (copy, nonatomic) NSString *listIdentifier;
@property (copy, nonatomic) NSString *focusModeIdentifier;
@property (retain, nonatomic) BSMachPortSendRight *machPortSendRight;
@property (nonatomic) BOOL wantsListVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

@end

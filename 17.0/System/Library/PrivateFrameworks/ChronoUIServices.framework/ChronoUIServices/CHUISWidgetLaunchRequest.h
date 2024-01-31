@class BSAction, NSString, NSUserActivity, NSURL;

@interface CHUISWidgetLaunchRequest : NSObject <BSXPCSecureCoding, NSCopying>

@property (readonly, nonatomic) BOOL isEntitledToOpenSystemProcesses;
@property (readonly, nonatomic) BSAction *launchAction;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSUserActivity *newUserActivity;
@property (readonly, nonatomic) NSString *effectiveContainerBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)userActivityData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_stateDumpDescription;
- (id)initWithLaunchAction:(id)a0 effectiveContainerBundleIdentifier:(id)a1 isEntitledToOpenSystemProcesses:(BOOL)a2;

@end

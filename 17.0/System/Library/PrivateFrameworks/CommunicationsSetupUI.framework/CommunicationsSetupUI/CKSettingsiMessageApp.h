@class NSString;

@interface CKSettingsiMessageApp : NSObject

@property (readonly, nonatomic) NSString *extensionBundleID;
@property (readonly, nonatomic) NSString *appBundleID;
@property (readonly, nonatomic) NSString *extensionDisplayName;
@property (readonly, nonatomic) NSString *appDisplayName;
@property (readonly, nonatomic) BOOL isiMessageAppOnly;
@property (readonly, getter=isDeletable) BOOL deletable;
@property (getter=isHiddenInSendMenuByUserPreference) BOOL hiddenInSendMenuByUserPreference;

- (id)initWithExtension:(id)a0;
- (void).cxx_destruct;
- (id)_hiddenExtensionBundleIdentifiers;
- (void)_setHiddenExtensionBundleIdentifiers:(id)a0;
- (id)_stringArrayFromUserDefaults:(id)a0 key:(id)a1;

@end

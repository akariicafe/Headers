@interface SUSFollowUp : NSObject

+ (id)categoryIdentifier;
+ (id)groupIdentifier;
+ (id)actions;
+ (id)identifier;
+ (id)extensionIdentifier;
+ (id)bundleIconName;
+ (id)uniqueIdentifier;
+ (unsigned long long)displayStyle;
+ (id)representingBundlePath;
+ (id)generateFollowUpWithDescriptor:(id)a0 userInfo:(id)a1;
+ (id)informativeTextWithDescriptor:(id)a0;
+ (id)notificationWithDescriptor:(id)a0;
+ (id)titleWithDescriptor:(id)a0;

@end

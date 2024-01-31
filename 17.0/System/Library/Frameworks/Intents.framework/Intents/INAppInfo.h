@class NSString, NSArray, NSSet, NSDictionary, NSData;

@interface INAppInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *companionApplicationIdentifier;
@property (copy, nonatomic) NSArray *counterpartIdentifiers;
@property (copy, nonatomic) NSString *developmentRegion;
@property (copy, nonatomic) NSSet *supportedActions;
@property (copy, nonatomic) NSSet *supportedIntents;
@property (copy, nonatomic) NSSet *supportedIntentsByApp;
@property (copy, nonatomic) NSSet *supportedActionsByExtensions;
@property (copy, nonatomic) NSSet *actionsRestrictedWhileLocked;
@property (copy, nonatomic) NSSet *actionsRestrictedWhileProtectedDataUnavailable;
@property (copy, nonatomic) NSSet *supportedMediaCategories;
@property (copy, nonatomic) NSSet *definedIntents;
@property (copy, nonatomic) NSDictionary *supportedIntentsGroupedByExtensionPoints;
@property (nonatomic) BOOL supportsMultiwindow;
@property (nonatomic, getter=isRequiresAppLaunchPreflight) BOOL requiresAppLaunchPreflight;
@property (readonly, copy, nonatomic) NSData *data;

+ (id)appInfoWithAppProxy:(id)a0;
+ (id)appInfoWithApplicationRecord:(id)a0;
+ (id)_appInfoWithApplicationRecord:(id)a0 applicationExtensionRecords:(id)a1 userActivityTypes:(id)a2;
+ (id)appInfoWithData:(id)a0 error:(id *)a1;
+ (id)appInfoWithIntent:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

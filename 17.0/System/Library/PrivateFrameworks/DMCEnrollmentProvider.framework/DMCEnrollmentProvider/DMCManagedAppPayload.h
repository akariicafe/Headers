@class NSString;

@interface DMCManagedAppPayload : MCPayload

@property (retain, nonatomic) NSString *managedAppID;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (void).cxx_destruct;
- (id)title;
- (id)initWithManagedAppID:(id)a0 profile:(id)a1;

@end

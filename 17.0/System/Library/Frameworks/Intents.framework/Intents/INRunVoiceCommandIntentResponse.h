@class NSString, NSDictionary, NSArray, NSNumber, INArchivedObject;

@interface INRunVoiceCommandIntentResponse : INIntentResponse <INRunVoiceCommandIntentResponseExport>

@property (readonly, nonatomic) long long code;
@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) long long intentCategory;
@property (copy, nonatomic) NSNumber *customResponsesDisabled;
@property (copy, nonatomic) NSString *responseTemplate;
@property (copy, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) NSString *verb;
@property (copy, nonatomic) INArchivedObject *underlyingIntent;
@property (copy, nonatomic) NSString *localizedAppName;
@property (copy, nonatomic) INArchivedObject *underlyingIntentResponse;
@property (nonatomic) long long toggleState;
@property (copy, nonatomic) NSNumber *continueRunning;
@property (copy, nonatomic) NSNumber *interstitialDisabled;
@property (copy, nonatomic) NSString *underlyingIntentTitle;
@property (copy, nonatomic) NSArray *steps;
@property (copy, nonatomic) NSNumber *prefersExecutionOnCompanion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_appLaunchRequestedFromCode:(long long)a0;
+ (long long)_codeFromType:(int)a0 errorCode:(int)a1 appLaunchRequested:(BOOL)a2;
+ (int)_errorCodeFromCode:(long long)a0;
+ (int)_typeFromCode:(long long)a0;

- (id)_dictionaryRepresentation;
- (id)init;
- (id)initWithBackingStore:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)propertiesByName;
- (long long)_codeWithName:(id)a0;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (long long)_intentResponseCode;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (void)setPropertiesByName:(id)a0;

@end

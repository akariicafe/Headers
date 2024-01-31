@class NSString, _DKEvent, REIdentifier, NSDate, NSArray;
@protocol REDonatedActionIdentifierProviding;

@interface REDonatedAction : NSObject <NSSecureCoding, NSCopying> {
    BOOL _isIntentBacked;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *localSaveDate;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) REIdentifier *donationIdentifier;
@property (readonly, nonatomic) id<REDonatedActionIdentifierProviding> actionTypeIdentifier;
@property (readonly, nonatomic) id<REDonatedActionIdentifierProviding> simplifiedActionTypeIdentifier;
@property (readonly, nonatomic, getter=isLocalDonation) BOOL localDonation;
@property (readonly, nonatomic) NSString *eventLevelIdentifier;
@property (readonly, nonatomic) NSString *appLevelIdentifier;
@property (readonly, nonatomic) unsigned long long filteredShortcutType;
@property (retain, nonatomic) _DKEvent *event;
@property (readonly, nonatomic) unsigned long long relevanceProvidersHash;
@property (readonly, nonatomic) NSArray *relevanceProviders;
@property (readonly, nonatomic) NSString *intentTypeName;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSString *remoteBundleIdentifier;
@property (readonly, nonatomic) NSString *localBundleIdentifier;
@property (readonly, nonatomic) unsigned long long trainingActionIdentifier;

+ (id)bundleIdForExtensionId:(id)a0;
+ (BOOL)supportedActivityType:(id)a0 forBundleID:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)loadIntent:(id /* block */)a0;
- (void)loadRelevantShortcut:(id /* block */)a0;
- (void)loadUserActivity:(id /* block */)a0;
- (void)_loadDuetEvent:(id /* block */)a0;
- (id)generateMetrics;
- (id)_shortcutFilter;
- (unsigned long long)_hashRelevanceProviders:(id)a0;
- (id)_initInteractionWithEvent:(id)a0 filtered:(BOOL)a1;
- (id)_initRelevantShortcutWithEvent:(id)a0 filtered:(BOOL)a1;
- (id)_initUserActivityWithEvent:(id)a0 filtered:(BOOL)a1;
- (void)_loadShortcutIdentifiersFromIntent:(id)a0;
- (void)_loadShortcutIdentifiersFromUserActivity:(id)a0;
- (id)initWithEvent:(id)a0 filtered:(BOOL)a1;

@end

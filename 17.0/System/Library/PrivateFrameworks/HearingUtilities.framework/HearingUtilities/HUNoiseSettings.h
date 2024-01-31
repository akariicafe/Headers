@class NSDate, NSString, NSURL, NSAttributedString, NSArray, NSMutableDictionary, NSLock, NSMutableSet, NPSDomainAccessor, NSNumber;

@interface HUNoiseSettings : NSObject {
    NSLock *_synchronizeDomainsLock;
}

@property (retain, nonatomic) NSMutableSet *registeredNotifications;
@property (retain, nonatomic) NSMutableSet *synchronizePreferences;
@property (retain, nonatomic) NSMutableDictionary *updateBlocks;
@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (nonatomic) BOOL noiseEnabled;
@property (nonatomic) BOOL onboardingCompleted;
@property (nonatomic) BOOL notificationsEnabled;
@property (nonatomic) unsigned long long notificationThreshold;
@property (retain, nonatomic) NSDate *notificationMuteDate;
@property (nonatomic) double currentLeq;
@property (retain, nonatomic) NSDate *leqTimestamp;
@property (nonatomic) double leqDuration;
@property (nonatomic) BOOL migratedThreshold;
@property (nonatomic) unsigned long long thresholdVersion;
@property (nonatomic) BOOL internalLoggingEnabled;
@property (readonly, nonatomic) NSString *launchNoiseOnboardingTitle;
@property (readonly, nonatomic) NSString *environmentalMeasurementsTitleDescription;
@property (readonly, nonatomic) NSString *environmentalMeasurementsFooterDescription;
@property (readonly, nonatomic) NSString *noiseThresholdSectionTitle;
@property (readonly, nonatomic) NSString *noiseThresholdTitleDescription;
@property (readonly, nonatomic) NSAttributedString *noiseThresholdFooterDescriptionWithLink;
@property (readonly, nonatomic) NSString *noiseThresholdFooterDescription;
@property (readonly, nonatomic) NSString *noiseThresholdFooterLinkTitle;
@property (readonly, nonatomic) NSURL *noiseThresholdFooterLinkURL;
@property (readonly, nonatomic) NSString *noiseThresholdValueFooterDescription;
@property (readonly, nonatomic) long long noiseThresholdMinutesThreshold;
@property (readonly, nonatomic) long long noiseThresholdCurrentValue;
@property (readonly, nonatomic) NSArray *noiseThresholdOptions;
@property (retain, nonatomic) NSNumber *notificationsEnabledOverride;
@property (retain, nonatomic) NSNumber *notificationsThreshholdOverride;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_preferenceKeyForSelector:(SEL)a0;
- (id)_valueForPreferenceKey:(id)a0;
- (void)pairedWatchDidChange:(id)a0;
- (void)_setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)_registerForNotification:(id)a0;
- (void)_synchronizeIfNecessary:(id)a0;
- (void).cxx_destruct;
- (void)registerUpdateBlock:(id /* block */)a0 forRetrieveSelector:(SEL)a1 withListener:(id)a2;
- (void)_handlePreferenceChanged:(id)a0;
- (id)notificationForPreferenceKey:(id)a0;
- (id)localizedNoiseThresholdDetailValue:(long long)a0;
- (id)localizedNoiseThresholdValue:(long long)a0;
- (BOOL)preferenceIsSetForRetrieveSelector:(SEL)a0;

@end

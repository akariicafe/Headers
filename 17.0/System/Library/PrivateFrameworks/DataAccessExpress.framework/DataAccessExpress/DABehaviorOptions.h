@interface DABehaviorOptions : NSObject

+ (void)initialize;
+ (BOOL)isAppleInternalInstall;
+ (BOOL)CFNetworkLogging;
+ (BOOL)compressRequests;
+ (BOOL)isCustomerInstall;
+ (id)DAManagedDefaultForKey:(id)a0;
+ (BOOL)babysitterEnabled;
+ (BOOL)completelyIgnoreNotes;
+ (BOOL)isInHoldingPattern;
+ (BOOL)promptForAllCerts;
+ (BOOL)useContactsFramework;
+ (id)APSEnv;
+ (void)_startListeningForNotifications;
+ (BOOL)_shouldForceCookies:(BOOL *)a0;
+ (BOOL)addDAManagedDefaults:(id)a0;
+ (BOOL)allIMAPServersSupportNotesSearch;
+ (BOOL)alwaysUseCalendarHomeSync;
+ (BOOL)calDAVRemindersForAll;
+ (BOOL)cookiesEnabled;
+ (BOOL)customAutoDV2UserAgentEnabled;
+ (double)defaultDAVProbeTimeout;
+ (double)defaultEASTaskTimeoutOutWasFound:(BOOL *)a0;
+ (BOOL)earlyPingEnabled;
+ (BOOL)enableAutomaticAttachmentDownloads;
+ (BOOL)enablePromptForServerTrust;
+ (double)holidayCalendarRefreshInterval;
+ (id)holidayCalendarURL;
+ (BOOL)ignoreBadLDAPCerts;
+ (BOOL)ignoreSupportedCommands;
+ (BOOL)isEASParsingLogEnabled;
+ (int)numForgivable401s;
+ (BOOL)orphanCheckEnabled;
+ (BOOL)perfLogging;
+ (int)refreshThrottleTime;
+ (void)removeDAManagedDefaults:(id)a0;
+ (BOOL)sendMeCardEverywhere;
+ (BOOL)useContactsFramerwork;
+ (BOOL)useThunderhillBetaServers;
+ (id)whitelistedEASProtocols;
+ (BOOL)writeOutBrokenCancelationRequests;

@end

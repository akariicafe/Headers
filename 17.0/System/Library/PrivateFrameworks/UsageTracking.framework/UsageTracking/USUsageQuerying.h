@class BMCoreDuetStream;
@protocol _CDUserContext;

@interface USUsageQuerying : NSObject

@property (readonly) id<_CDUserContext> context;
@property (readonly) BMCoreDuetStream *duetStream;

+ (id)getLocalDeviceIdentifierAndReturnError:(id *)a0;
+ (void)synchronizeUsageWithCompletionHandler:(id /* block */)a0;

- (id)init;
- (id)_getWebDomainsFromWebUsageEvents:(id)a0 videoUsageEvents:(id)a1 interval:(id)a2 referenceDate:(id)a3 focalOnly:(BOOL)a4;
- (void)_updateWebUsageWithInterval:(id)a0 webDomain:(id)a1 trustedWebUsage:(BOOL)a2 deviceIdentifier:(id)a3 event:(id)a4 webUsageIntervalsByDevice:(id)a5 categoryUsageIntervalsByDevice:(id)a6 aggregatedApplicationUsageIntervalsByDevice:(id)a7 aggregatedWebUsageIntervalsByDevice:(id)a8 categoryByWebDomain:(id)a9 timeZoneByDevice:(id)a10 lastEventDateByDevice:(id)a11;
- (id)_generatePickupsByBundleIdentifierWithPickupIntervals:(id)a0 applicationUsageIntervals:(id)a1 pickupsWithoutApplicationUsage:(unsigned long long *)a2 firstPickup:(id *)a3;
- (void)_computeUncategorizedLocalWebUsageWithWebUsageEvents:(id)a0 uncategorizedDomains:(id)a1 interval:(id)a2 referenceDate:(id)a3 completionHandler:(id /* block */)a4;
- (void)_updateNotificationsWithEvent:(id)a0 bundleIdentifier:(id)a1 trustedNotification:(BOOL)a2 deviceIdentifier:(id)a3 notificationsByDevice:(id)a4 timeZoneByDevice:(id)a5 lastEventDateByDevice:(id)a6;
- (void)queryForUncategorizedLocalWebUsageDuringInterval:(id)a0 completionHandler:(id /* block */)a1;
- (void)_enumerateCurrentVideoUsageIntervalsDuringInterval:(id)a0 referenceDate:(id)a1 block:(id /* block */)a2;
- (id)initWithContext:(id)a0 eventStorage:(id)a1;
- (id)queryForApplications:(id)a0 webDomains:(id)a1 categories:(id)a2 interval:(id)a3 error:(id *)a4;
- (void)_updateScreenTimeWithInterval:(id)a0 rawInterval:(id)a1 deviceIdentifier:(id)a2 partition:(id)a3 event:(id)a4 nonIntersectingScreenTimeIntervalsByDevice:(id)a5 intersectingScreenTimeIntervalsByDevice:(id)a6 longestSessionByDevice:(id)a7 timeZoneByDevice:(id)a8 lastEventDateByDevice:(id)a9;
- (id)_computeApplicationUsageWithEvents:(id)a0 unboundApplicationUsageIntervalsByDevice:(id *)a1 timeZoneByDevice:(id)a2 lastEventDateByDevice:(id)a3 categoryUsageIntervalsByDevice:(id)a4 aggregatedApplicationUsageIntervalsByDevice:(id)a5 categoryByBundleIdentifier:(id)a6 partition:(id)a7 referenceDate:(id)a8 focalOnly:(BOOL)a9;
- (id)_getBundleIdentiersFromApplicationUsageEvents:(id)a0 videoUsageEvents:(id)a1 interval:(id)a2 referenceDate:(id)a3 focalOnly:(BOOL)a4;
- (id)initWithContext:(id)a0 coreDuetStream:(id)a1;
- (void)_updateNowPlayingUsageWithInterval:(id)a0 event:(id)a1 deviceIdentifier:(id)a2 categoryUsageIntervalsByDevice:(id)a3 timeZoneByDevice:(id)a4 lastEventDateByDevice:(id)a5;
- (void)_enumerateCurrentWebUsageIntervalsDuringInterval:(id)a0 referenceDate:(id)a1 focalOnly:(BOOL)a2 block:(id /* block */)a3;
- (void)_computeUsageWithDisplayBacklitEvents:(id)a0 applicationUsageEvents:(id)a1 webUsageEvents:(id)a2 nowPlayingEvents:(id)a3 videoUsageEvents:(id)a4 notificationEvents:(id)a5 categoryByBundleIdentifier:(id)a6 categoryByWebDomain:(id)a7 interval:(id)a8 partitionInterval:(double)a9 referenceDate:(id)a10 focalOnly:(BOOL)a11 completionHandler:(id /* block */)a12;
- (id)_computeNotificationsWithEvents:(id)a0 timeZoneByDevice:(id)a1 lastEventDateByDevice:(id)a2 partition:(id)a3;
- (id)_newReportWithNonIntersectingScreenTimeIntervals:(id)a0 pickupsByBundleIdentifier:(id)a1 pickupsWithoutApplicationUsage:(unsigned long long)a2 firstPickup:(id)a3 longestSession:(id)a4 applicationUsageIntervals:(id)a5 webUsageIntervals:(id)a6 categoryUsageIntervals:(id)a7 aggregatedApplicationUsageIntervals:(id)a8 aggregatedWebUsageIntervals:(id)a9 categoryByBundleIdentifier:(id)a10 categoryByWebDomain:(id)a11 notifications:(id)a12 interval:(id)a13 timeZone:(id)a14 lastEventDate:(id)a15;
- (double)_computeUsageForApplications:(id)a0 webDomains:(id)a1 categories:(id)a2 applicationUsageEvents:(id)a3 webUsageEvents:(id)a4 nowPlayingEvents:(id)a5 videoUsageEvents:(id)a6 categoryByBundleIdentifier:(id)a7 categoryByWebDomain:(id)a8 interval:(id)a9 referenceDate:(id)a10 focalOnly:(BOOL)a11;
- (void)queryUsageDuringInterval:(id)a0 partitionInterval:(double)a1 completionHandler:(id /* block */)a2;
- (id)_computeScreenTime:(BOOL)a0 withEvents:(id)a1 intersectingScreenTimeIntervalsByDevice:(id *)a2 longestSessionByDevice:(id *)a3 timeZoneByDevice:(id)a4 lastEventDateByDevice:(id)a5 partition:(id)a6 referenceDate:(id)a7;
- (void)queryUsageDuringInterval:(id)a0 partitionInterval:(double)a1 focalOnly:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_enumerateCurrentApplicationUsageIntervalsDuringInterval:(id)a0 referenceDate:(id)a1 focalOnly:(BOOL)a2 block:(id /* block */)a3;
- (double)_generateUsageTimeWithApplicationUsageIntervals:(id)a0 webUsageIntervalsByDevice:(id)a1 categoryUsageIntervalsByDevice:(id)a2 aggregatedApplicationUsageIntervalsByDevice:(id)a3 aggregatedWebUsageIntervalsByDevice:(id)a4 categoryByBundleIdentifier:(id)a5 categoryByWebDomain:(id)a6 applications:(id)a7 webDomains:(id)a8 categories:(id)a9;
- (void)_updateApplicationUsageWithInterval:(id)a0 unboundInterval:(id)a1 bundleIdentifier:(id)a2 trustedApplicationUsage:(BOOL)a3 deviceIdentifier:(id)a4 event:(id)a5 applicationUsageIntervalsByDevice:(id)a6 unboundApplicationUsageIntervalsByDevice:(id)a7 categoryUsageIntervalsByDevice:(id)a8 aggregatedApplicationUsageIntervalsByDevice:(id)a9 categoryByBundleIdentifier:(id)a10 timeZoneByDevice:(id)a11 lastEventDateByDevice:(id)a12;
- (id)queryForApplications:(id)a0 webDomains:(id)a1 categories:(id)a2 interval:(id)a3 segmentInterval:(double)a4 error:(id *)a5;
- (void)_enumerateEvents:(id)a0 intervalEndDate:(id)a1 block:(id /* block */)a2;
- (id)_currentScreenTimeIntervalDuringInterval:(id)a0 usageStartDate:(id *)a1 referenceDate:(id)a2;
- (void)_computeNowPlayingUsageWithEvents:(id)a0 categoryUsageIntervalsByDevice:(id)a1 timeZoneByDevice:(id)a2 lastEventDateByDevice:(id)a3 partition:(id)a4 referenceDate:(id)a5;
- (id)_generateUncategorizedLocalWebUsageWithWebUsageIntervals:(id)a0 uncategorizedDomains:(id)a1;
- (id)_computeWebUsageWithEvents:(id)a0 timeZoneByDevice:(id)a1 lastEventDateByDevice:(id)a2 categoryUsageIntervalsByDevice:(id)a3 aggregatedApplicationUsageIntervalsByDevice:(id)a4 aggregatedWebUsageIntervalsByDevice:(id)a5 categoryByWebDomain:(id)a6 partition:(id)a7 referenceDate:(id)a8 focalOnly:(BOOL)a9;
- (id)_currentNowPlayingUsageIntervalsDuringInterval:(id)a0 referenceDate:(id)a1;
- (id)queryForApplications:(id)a0 webDomains:(id)a1 categories:(id)a2 interval:(id)a3 focalOnly:(BOOL)a4 error:(id *)a5;
- (void)_updateLocalReports:(id)a0 remoteReports:(id)a1 aggregateReports:(id)a2 nonIntersectingScreenTimeIntervals:(id)a3 intersectingScreenTimeIntervals:(id)a4 longestSessionByDevice:(id)a5 applicationUsageIntervals:(id)a6 unboundApplicationUsageIntervals:(id)a7 webUsageIntervalsByDevice:(id)a8 categoryUsageIntervalsByDevice:(id)a9 aggregatedApplicationUsageIntervalsByDevice:(id)a10 aggregatedWebUsageIntervalsByDevice:(id)a11 categoryByBundleIdentifier:(id)a12 categoryByWebDomain:(id)a13 notificationsByDevice:(id)a14 interval:(id)a15 timeZoneByDevice:(id)a16 lastEventDateByDevice:(id)a17;

@end

@class NSArray, NSString;

@interface SafariClearBrowsingDataController : NSObject <SFClearHistoryViewControllerDelegate>

@property (readonly) NSArray *availableIntervals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)clearHistoryVisitsAddedAfterDate:(id)a0 beforeDate:(id)a1 profileIdentifier:(id)a2 clearAllProfiles:(BOOL)a3 closeAllTabs:(BOOL)a4;
- (long long)_analyticsClearBrowsingIntervalForDate:(id)a0;
- (void)_clearBrowsingDataAddedAfterDate:(id)a0 profileIdentifiers:(id)a1 closeAllTabs:(BOOL)a2;
- (void)clearDataAddedAfterDate:(id)a0 beforeDate:(id)a1 profileIdentifier:(id)a2 clearAllProfiles:(BOOL)a3 closeTabs:(BOOL)a4;
- (void)showClearHistoryMenuFromViewController:(id)a0;

@end

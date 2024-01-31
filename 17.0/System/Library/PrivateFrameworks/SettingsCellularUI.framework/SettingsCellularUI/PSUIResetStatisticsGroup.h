@class PSUICoreTelephonyDataCache, PSConfirmationSpecifier, PSSpecifier, CHManager;
@protocol PSUIResetStatisticsGroupDelegate;

@interface PSUIResetStatisticsGroup : NSObject

@property (retain, nonatomic) PSUICoreTelephonyDataCache *dataCache;
@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) PSSpecifier *enableStatisticsSpecifier;
@property (retain, nonatomic) PSConfirmationSpecifier *resetButtonSpecifier;
@property (retain, nonatomic) CHManager *callHistoryManager;
@property (weak, nonatomic) id<PSUIResetStatisticsGroupDelegate> delegate;

- (id)getLogger;
- (id)specifiers;
- (void).cxx_destruct;
- (id)_lastUpdateDate;
- (void)_updateFooterText;
- (void)clearStats;
- (void)createSpecifiers;
- (id)_createResetConfirmationAlertDict;
- (void)clearStatsPressed:(id)a0;
- (id)initWithDataCache:(id)a0 callHistoryManager:(id)a1 delegate:(id)a2;
- (void)setStatsEnabled:(id)a0 specifier:(id)a1;
- (id)statsEnabled:(id)a0;

@end

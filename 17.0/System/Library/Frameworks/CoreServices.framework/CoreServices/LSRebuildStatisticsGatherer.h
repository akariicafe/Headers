@class NSError;

@interface LSRebuildStatisticsGatherer : NSObject {
    unsigned long long _totalRebuildTime;
    unsigned long long _systemContentScanTime;
    unsigned long long _systemContentSaveTime;
    unsigned long long _cryptexContentScanTime;
    unsigned long long _containerizedContentScanTime;
    unsigned long long _numPlugins;
    unsigned long long _numApplications;
    BOOL _onlyCryptexContent;
    BOOL _migratorRunning;
    BOOL _userRequested;
    unsigned short _rebuildReasonFlags;
    NSError *_rebuildError;
}

- (id)init;
- (void).cxx_destruct;

@end

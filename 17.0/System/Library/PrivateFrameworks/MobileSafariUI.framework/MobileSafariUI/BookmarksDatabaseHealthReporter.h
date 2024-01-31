@interface BookmarksDatabaseHealthReporter : NSObject {
    double _lastReportTimeInterval;
}

- (void)reportDatabaseHealth;
- (id)_userDefaults;
- (BOOL)_shouldReportDatabaseHealth;

@end

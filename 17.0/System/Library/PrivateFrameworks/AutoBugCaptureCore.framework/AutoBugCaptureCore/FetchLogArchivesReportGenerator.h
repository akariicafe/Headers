@interface FetchLogArchivesReportGenerator : NetworkDiagnosticsReportGenerator

- (void)setHighVolumeLoggersDuration:(unsigned long long)a0 maximumSize:(unsigned long long)a1;
- (id)initWithQueue:(id)a0;
- (void)setBaseDuration:(unsigned long long)a0 maximumSize:(unsigned long long)a1;
- (void)setDefaults;
- (void)setTTLDuration:(unsigned long long)a0 maximumSize:(unsigned long long)a1;

@end

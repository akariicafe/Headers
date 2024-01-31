@class NSObject;
@protocol MXDeliveryPathUtilProtocol, OS_os_log, MXClientUtilProtocol;

@interface MXCleanUtil : NSObject

@property (retain) id<MXClientUtilProtocol> clientUtil;
@property (retain) id<MXDeliveryPathUtilProtocol> deliveryPathUtil;
@property (retain) NSObject<OS_os_log> *logHandle;

- (void).cxx_destruct;
- (void)_cleanClientfulSourceDirectoriesForStaleData;
- (void)_cleanClientlessSourceDirectoryForStaleData;
- (void)_cleanDeliveryDirectoriesForClient:(id)a0;
- (void)_cleanDeliveryDirectoriesForStaleData;
- (void)_cleanDiagnosticDeliveryDirectoriesForStaleData;
- (void)_cleanDiagnosticDeliveryDirectoryForStaleDataForDirectory:(id)a0;
- (void)_cleanDirectoriesForStaleData;
- (void)_cleanDirectoriesForUninstalledClient:(id)a0;
- (void)_cleanDirectoriesForUninstalledClients;
- (void)_cleanDirectory:(id)a0;
- (void)_cleanFileFromFilePath:(id)a0;
- (void)_cleanMetricDeliveryDirectoriesForStaleData;
- (void)_cleanMetricDeliveryDirectoryForStaleDataForDirectory:(id)a0;
- (void)_cleanSourceDirectoriesForClient:(id)a0;
- (void)_cleanSourceDirectoriesForStaleData;
- (void)_cleanSourceDirectoryForSource:(id)a0 andClient:(id)a1;
- (void)_cleanStaleDataForSourceDirectory:(id)a0;
- (id)_clientfulSourceDirectories;
- (id)_clientlessSourceDirectory;
- (id)_dateFromDateString:(id)a0;
- (id)_dateFromDiagnosticFilename:(id)a0;
- (id)_dateFromMetricFilename:(id)a0;
- (id)_dateStringFromDiagnosticSourceFilename:(id)a0;
- (id)_dateStringFromMetricSourceFilename:(id)a0;
- (id)_dateStringFromUnprefixedFilename:(id)a0;
- (id)_datesFromDiagnosticFilenames:(id)a0;
- (id)_datesFromMetricFilenames:(id)a0;
- (id)_diagnosticDeliveryDirectories;
- (id)_diagnosticDeliveryDirectoryForClient:(id)a0;
- (id)_diagnosticDeliveryParentDirectory;
- (id)_filenamesFromDirectory:(id)a0;
- (BOOL)_isDiagnosticDeliveryStaleForDirectory:(id)a0;
- (BOOL)_isDiagnosticSourceFilename:(id)a0;
- (BOOL)_isMetricDeliveryStaleForDirectory:(id)a0;
- (BOOL)_isMetricSourceFilename:(id)a0;
- (BOOL)_isStaleDiagnosticSourceForFilename:(id)a0;
- (BOOL)_isStaleForDate:(id)a0;
- (BOOL)_isStaleMetricSourceForFilename:(id)a0;
- (BOOL)_isStaleSourceForFilename:(id)a0;
- (id)_lastFileDateFromDiagnosticFilenames:(id)a0;
- (id)_lastFileDateFromMetricFilenames:(id)a0;
- (id)_latestDateFromDates:(id)a0;
- (id)_metricDeliveryDirectories;
- (id)_metricDeliveryDirectoryForClient:(id)a0;
- (id)_metricDeliveryParentDirectory;
- (id)_sourceDirectoryForSource:(id)a0 andClient:(id)a1;
- (id)_subdirectoriesFromDirectory:(id)a0;
- (void)cleanStaleData;
- (id)initWithClientUtil:(id)a0 andDeliveryPathUtil:(id)a1;

@end

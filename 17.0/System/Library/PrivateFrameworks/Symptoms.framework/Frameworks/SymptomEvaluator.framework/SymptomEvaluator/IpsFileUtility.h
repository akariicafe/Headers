@interface IpsFileUtility : NSObject

+ (id)_createDataForCrashReporterIpsHeaderWithBugType:(id)a0 contentType:(id)a1 date:(id)a2 additionalFields:(id)a3;
+ (id)_createIpsFileNameWithPrefix:(id)a0 date:(id)a1 inDirectory:(id)a2;
+ (id)formattedDateForFilename:(id)a0;

- (void)dealloc;
- (BOOL)_checkDirectoryAndCreateIfNecessary:(id)a0;
- (BOOL)_writeIpsFileWithBugType:(id)a0 contentType:(id)a1 additionalIpsHeaders:(id)a2 ipsData:(id)a3 inDirectory:(id)a4 fileNamePrefix:(id)a5;
- (BOOL)createIpsFileWithBugType:(id)a0 contentType:(id)a1 additionalIpsHeaders:(id)a2 ipsContent:(id)a3 inDirectory:(id)a4 fileNamePrefix:(id)a5;
- (BOOL)createIpsFileWithBugType:(id)a0 contentType:(id)a1 additionalIpsHeaders:(id)a2 ipsData:(id)a3 inDirectory:(id)a4 fileNamePrefix:(id)a5;

@end

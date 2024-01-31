@class NSString, NSMutableDictionary, DiagnosticExtensionController, NSNumber;

@interface DiagnosticsController : NSObject {
    DiagnosticExtensionController *deCollector;
}

@property (retain, nonatomic) NSMutableDictionary *actionsDict;
@property (retain, nonatomic) NSMutableDictionary *settingsDict;
@property (retain, nonatomic) NSString *autoBugCapturePath;
@property (retain, nonatomic) NSNumber *autoBugCaptureGID;
@property (retain, nonatomic) NSNumber *autoBugCaptureUID;

+ (void)initialize;
+ (id)loggingStateCache;

- (BOOL)validateOSLogPreferencesProtocol:(id)a0;
- (BOOL)validateSettingsDictionary:(id)a0;
- (id)defaultsDictionaryWithAlwaysRunActions:(id)a0;
- (id)actionsDictionaryForProcess:(id)a0 logLevel:(id)a1 diagnosticExtensions:(id)a2;
- (void)dealloc;
- (id)diagnosticExtensionsForDiagnosticCase:(id)a0 enableCommonActions:(id)a1;
- (BOOL)validateActionsDictionary:(id)a0;
- (id)consolidatedLogLevelSetsFromActions:(id)a0;
- (id)diagExtensionCollector;
- (BOOL)validateSettingsNodeDictionary:(id)a0 identifier:(id)a1 isDefault:(BOOL)a2;
- (void)raiseLoggingForActions:(id)a0 identifier:(id)a1;
- (BOOL)validateDiagnosticsConfiguration:(id)a0;
- (void)applyLogLevelSets:(id)a0;
- (BOOL)validateSettingsNodeContents:(id)a0 identifier:(id)a1;
- (BOOL)validateActionsDictionaryContent:(id)a0 identifier:(id)a1;
- (void)configureWithDiagnosticActions:(id)a0;
- (void)consolidateLoggingLevelsIntoSet:(id)a0 withCurrentState:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void)applyLogLevel:(id)a0 forIdentifier:(id)a1 logSettingType:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)lowerLoggingForIdentifier:(id)a0;
- (id)diagActionsForSignature:(id)a0;
- (BOOL)_loadLoggingSupport;
- (unsigned long long)collectDiagnosticExtensionFilesForDiagnosticCase:(id)a0 parameters:(id)a1 options:(id)a2 queue:(id)a3 reply:(id /* block */)a4;
- (void)raiseLoggingForDiagnosticCase:(id)a0;
- (void)lowerLoggingForDiagnosticCase:(id)a0;
- (id)diagActionsForSignature:(id)a0 commonActions:(id)a1;

@end

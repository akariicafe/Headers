@class NSArray;

@interface WBSCoreAnalyticsExtensionsStatistics : NSObject

@property (readonly, nonatomic) unsigned long long enabledCount;
@property (readonly, nonatomic) unsigned long long disabledCount;
@property (readonly, nonatomic) NSArray *telemetryDataForExtensions;
@property (readonly, nonatomic) BOOL hasExtensionThatCanOverrideNewTabPage;
@property (readonly, nonatomic) BOOL newTabPageIsOverridden;

- (void).cxx_destruct;
- (id)initWithExtensionsList:(id)a0 extractDeveloperIdentifier:(id /* block */)a1 extractComposedIdentifier:(id /* block */)a2 extensionTelemetryDataPredicate:(id /* block */)a3 newTabPageIsOverridden:(BOOL)a4;
- (id)initWithExtensionsList:(id)a0 extractDeveloperIdentifier:(id /* block */)a1 extractComposedIdentifier:(id /* block */)a2 extensionTelemetryDataPredicate:(id /* block */)a3;

@end

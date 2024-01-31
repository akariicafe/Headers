@class REFeatureSet, NSString, NSArray, NSURL, NSMutableDictionary, RELocationManager, NSObject, REDataSourceLoader, RERelevanceProviderManagerLoader;
@protocol OS_dispatch_queue, RERelevanceEngineMetricsRecorder;

@interface RERelevanceEngineConfiguration : NSObject <REAutomaticExportedInterface, NSCopying, NSMutableCopying> {
    NSMutableDictionary *_values;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *engineQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (readonly, copy, nonatomic) NSURL *modelFileURL;
@property (readonly, copy, nonatomic) NSURL *baseModelFileURL;
@property (readonly, nonatomic) unsigned long long modelVersion;
@property (readonly, nonatomic) BOOL allowsUpdatingModelFile;
@property (readonly, copy, nonatomic) REDataSourceLoader *dataSourceLoader;
@property (readonly, copy, nonatomic) RERelevanceProviderManagerLoader *relevanceProviderManagerLoader;
@property (readonly, nonatomic) unsigned long long trainingBehavior;
@property (readonly, nonatomic) unsigned long long modelStorageBehavior;
@property (readonly, copy, nonatomic) NSArray *sectionDescriptors;
@property (readonly, copy, nonatomic) NSArray *interactionDescriptors;
@property (readonly, nonatomic) RELocationManager *locationManager;
@property (readonly, copy, nonatomic) REFeatureSet *primaryFeatures;
@property (readonly, nonatomic) BOOL wantsImmutableContent;
@property (readonly, nonatomic) NSString *preferenceDomain;
@property (readonly, nonatomic) BOOL allowsRemoteTraining;
@property (readonly, nonatomic) BOOL wantsBackup;
@property (readonly, nonatomic) BOOL ignoreDeviceLockState;
@property (readonly, nonatomic) BOOL allowsDiagnosticExtension;
@property (readonly, nonatomic) id<RERelevanceEngineMetricsRecorder> metricsRecorder;
@property (readonly, nonatomic) BOOL ignoresInstalledApplications;
@property (readonly, copy, nonatomic) NSArray *whitelistedDataSourceClassNames;
@property (readonly, nonatomic) BOOL disableAutomaticContentManagement;

+ (id)defaultConfiguration;
+ (id)sampleUpNextConfiguration;
+ (id)_defaultModelFileURL;
+ (id)defaultUpNextConfiguration;

- (id)init;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithIndent:(unsigned long long)a0;
- (void)setValue:(id)a0 forKey:(id)a1 ofClass:(Class)a2;
- (id)valueForKey:(id)a0 ofClass:(Class)a1 defaultValue:(id)a2;

@end

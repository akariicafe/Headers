@class NSString, NSMutableDictionary;

@interface NTKFaceConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_complications;
    NSMutableDictionary *_editModeConfigurations;
    NSMutableDictionary *_metrics;
    NSMutableDictionary *_customData;
    NSString *_cachedDescription;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _complicationsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _editModeConfigurationsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _metricsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _customDataLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedDescriptionLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _descriptionLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL resourceDirectoryExists;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)complications;
- (id)description;
- (id)metrics;
- (void).cxx_destruct;
- (void)clearMetrics;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)customData;
- (void)setCustomDataFromConfiguration:(id)a0;
- (void)_applyComplicationsDescription:(id)a0;
- (void)_applyCustomData:(id)a0;
- (void)_applyCustomizationDescription:(id)a0 editModeMapping:(id)a1 forDevice:(id)a2;
- (void)_applyMetrics:(id)a0;
- (id)_dateMetricsKeys;
- (void)_enumerateComplicationsWithBlock:(id /* block */)a0;
- (void)_enumerateCustomDataWithBlock:(id /* block */)a0;
- (void)_enumerateEditModeConfigurationsWithBlock:(id /* block */)a0;
- (void)_invalidateDescription;
- (void)addConfigurationKeysToJSONDictionary:(id)a0 face:(id)a1;
- (void)appendCustomDataToDailySnapshotKey:(id)a0;
- (void)appendEditModesToDailySnapshotKey:(id)a0;
- (id)colorEditModeConfigurationWithJsonRepresentation:(id)a0 editMode:(long long)a1 editModeMapping:(id)a2 forDevice:(id)a3;
- (id)complicationForSlot:(id)a0;
- (id)customDataForKey:(id)a0;
- (id)editModeConfigurations;
- (void)incrementMetricForKey:(id)a0;
- (id)initWithJSONDictionary:(id)a0 editModeMapping:(id)a1 forDevice:(id)a2;
- (id)metricForKey:(id)a0;
- (id)optionForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)setComplication:(id)a0 forSlot:(id)a1;
- (void)setCustomData:(id)a0 forKey:(id)a1;
- (void)setMetric:(id)a0 forKey:(id)a1;
- (void)setMetricsFromConfiguration:(id)a0;
- (void)setOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)validationString;

@end

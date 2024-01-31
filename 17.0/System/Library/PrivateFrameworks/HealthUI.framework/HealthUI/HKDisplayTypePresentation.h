@class NSString, NSDictionary, HKDisplayTypePresentationConfiguration, HKDisplayTypeSummaryAttribution;

@interface HKDisplayTypePresentation : NSObject <NSCopying> {
    HKDisplayTypePresentationConfiguration *_defaultConfiguration;
    NSDictionary *_configurationOverrides;
}

@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) BOOL showAllDataHierarchically;
@property (readonly, nonatomic) BOOL showAppDataHierarchically;
@property (readonly, nonatomic) BOOL shouldDisplayUnitStringOnYAxis;
@property (readonly, nonatomic) BOOL useSecondsWhenDisplayingDuration;
@property (readonly, nonatomic) BOOL isCriticalForAutoscale;
@property (readonly, copy, nonatomic) NSString *detailImageName;
@property (readonly, copy, nonatomic) NSString *listIconImageNameOverride;
@property (readonly, copy, nonatomic) HKDisplayTypeSummaryAttribution *summaryAttribution;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)adjustedValueForClientValue:(id)a0;
- (id)adjustedValueForDaemonValue:(id)a0;
- (id)copyWithIsCriticalForAutoscale:(BOOL)a0;
- (double)adjustedDoubleForClientDouble:(double)a0;
- (double)adjustedDoubleForDaemonDouble:(double)a0;
- (id)configurationForTimeScope:(long long)a0;
- (id)copyWithListIconImageNameOverride:(id)a0;
- (id)initWithDefaultConfiguration:(id)a0 configurationOverrides:(id)a1 scaleFactor:(double)a2 showAllDataHierarchically:(BOOL)a3 showAppDataHierarchically:(BOOL)a4 shouldDisplayUnitStringOnYAxis:(BOOL)a5 useSecondsWhenDisplayingDuration:(BOOL)a6 isCriticalForAutoscale:(BOOL)a7 detailImageName:(id)a8 listIconImageNameOverride:(id)a9 summaryAttribution:(id)a10;

@end

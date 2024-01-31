@class HKDataMetadataWorkoutRouteSection, NSArray, HKSample, HKLocationReadings, NSMutableArray, HKLocationFetcher;
@protocol HKDataMetadataDeviceSectionRegulatedFeatureInfoProvider, HKDataMetadataViewControllerDelegate;

@interface HKDataMetadataViewController : HKTableViewController <HKDataMetadataSubsampleDelegate, HKDataMetadataReportAccessDelegate, HKAdaptiveModalPresented>

@property (readonly, nonatomic) NSArray *subSampleTypes;
@property (readonly, nonatomic) id<HKDataMetadataViewControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) HKLocationFetcher *locationFetcher;
@property (retain, nonatomic) HKLocationReadings *locationReadings;
@property (retain, nonatomic) id<HKDataMetadataDeviceSectionRegulatedFeatureInfoProvider> regulatedFeatureInfoProvider;
@property (retain, nonatomic) HKDataMetadataWorkoutRouteSection *workoutRouteSection;
@property (retain, nonatomic) HKSample *sample;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_loadSections;
- (id)accessViewControllerForSample:(id)a0 healthStore:(id)a1;
- (id)defaultPredicateForSampleType:(id)a0;
- (id)initWithSample:(id)a0 usingInsetStyling:(BOOL)a1 profileName:(id)a2 delegate:(id)a3;
- (void)viewControllerDidLeaveAdaptiveModal;
- (id)viewControllerForSampleType:(id)a0 subSamplePredicate:(id)a1 title:(id)a2;
- (void)viewControllerWillEnterAdaptiveModal;
- (void)_fetchRoutesWithSamplesHandler:(id /* block */)a0;
- (BOOL)_addSectionIfNonNull:(id)a0;
- (void)_addWorkoutRouteSection;
- (struct CGSize { double x0; double x1; })_adjustedTableViewSize;
- (void)_exportButtonAction:(id)a0;
- (void)_fetchSubSampleTypes;
- (void)_fetchWorkoutRouteLocations;
- (void)_localeOrDisplayTypeChange:(id)a0;
- (void)_updateSubSampleTypes:(id)a0 error:(id)a1;
- (void)_updateWorkoutRouteSize;
- (void)finishedAggregateQuery;
- (id)initWithSample:(id)a0 usingInsetStyling:(BOOL)a1 profileName:(id)a2 regulatedFeatureInfoProvider:(id)a3 delegate:(id)a4;

@end

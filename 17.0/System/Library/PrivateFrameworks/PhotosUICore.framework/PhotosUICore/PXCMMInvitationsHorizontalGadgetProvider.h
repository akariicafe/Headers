@class NSString, PXLibraryFilterState, NSDate, PXCMMInvitationsDataSourceManager;
@protocol PXCMMWorkflowPresenting;

@interface PXCMMInvitationsHorizontalGadgetProvider : PXGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXForYouRankable> {
    PXCMMInvitationsDataSourceManager *_dataSourceManager;
    BOOL _didGenerateGadgets;
}

@property (readonly, nonatomic) id<PXCMMWorkflowPresenting> workflowPresenter;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)generateGadgets;
- (void).cxx_destruct;
- (void)_updateGadgets;
- (unsigned long long)gadgetType;
- (void)loadDataForGadgets;
- (void)_configureDataSourceManager;
- (id)initWithWorkflowPresenter:(id)a0 libraryFilterState:(id)a1;

@end

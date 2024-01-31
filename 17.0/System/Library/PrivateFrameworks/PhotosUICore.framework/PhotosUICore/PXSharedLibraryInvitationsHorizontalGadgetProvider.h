@class NSString, PXSharedLibraryStatusProvider, NSDate;

@interface PXSharedLibraryInvitationsHorizontalGadgetProvider : PXGadgetProvider <PXChangeObserver, PXForYouRankable> {
    BOOL _didGenerateGadgets;
}

@property (readonly, nonatomic) PXSharedLibraryStatusProvider *statusProvider;
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
- (void)generateGadgets;
- (id)initWithSharedLibraryStatusProvider:(id)a0;
- (void).cxx_destruct;
- (void)_updateGadgets;
- (void)loadDataForGadgets;

@end

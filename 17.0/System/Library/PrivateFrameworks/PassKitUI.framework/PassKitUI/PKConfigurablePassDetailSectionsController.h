@class NSArray, NSString, NSDictionary;
@protocol PKConfigurablePassDetailSectionsControllerDelegate;

@interface PKConfigurablePassDetailSectionsController : NSObject <PKTableViewSectionController> {
    NSDictionary *_sectionMap;
    NSDictionary *_fieldMap;
}

@property (weak, nonatomic) id<PKConfigurablePassDetailSectionsControllerDelegate> delegate;
@property (nonatomic) BOOL useBridgeStyle;
@property (retain, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, nonatomic) NSArray *activePassDetailSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPaymentPass:(id)a0;
- (id)_initWithPaymentPass:(id)a0 visibleSectionIdentifiers:(id)a1 renderUnclaimedFields:(BOOL)a2;
- (BOOL)hasArbitraryInfoField:(id)a0;
- (id)initWithPaymentPass:(id)a0 forSelectSections:(id)a1;
- (BOOL)shouldHighlightRowAtIndexPath:(id)a0 sectionIdentifier:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;
- (id)titleForFooterInSectionIdentifier:(id)a0;
- (id)titleForHeaderInSectionIdentifier:(id)a0;

@end

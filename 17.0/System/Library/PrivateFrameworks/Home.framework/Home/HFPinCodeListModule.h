@class HFPinCodeItemProvider, NSSet, HMAccessory, HFPinCodeManager, HFStaticItem, HMHome;
@protocol HFItemSectionAccessoryButtonHeaderDelegate;

@interface HFPinCodeListModule : HFItemModule {
    NSSet *_itemProviders;
}

@property (retain, nonatomic) HFStaticItem *addPinCodeItem;
@property (retain, nonatomic) HFStaticItem *revokePinCodeItem;
@property (retain, nonatomic) HFPinCodeItemProvider *pinCodeItemProvider;
@property (nonatomic) unsigned long long listType;
@property (retain, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFPinCodeManager *pinCodeManager;
@property (weak, nonatomic) id<HFItemSectionAccessoryButtonHeaderDelegate> editButtonHeaderDelegate;

- (void).cxx_destruct;
- (id)_sectionIdentifier;
- (id)itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 pinCodeManager:(id)a1 listType:(unsigned long long)a2 home:(id)a3 forAccessory:(id)a4;

@end

@class NSString, NSMutableSet, NSMutableDictionary;
@protocol _CRKCardSectionViewLoaderDelegate, CRCard;

@interface _CRKCardSectionViewLoader : NSObject <CRKCardSectionViewSourcing> {
    NSMutableDictionary *_cardSectionViewConfigurationsByCardSectionIdentifiersByProviderIdentifiers;
    NSMutableDictionary *_vetoingProviderIdentifiersByVetoedCardSectionIdentifiers;
}

@property (weak, nonatomic) id<_CRKCardSectionViewLoaderDelegate> delegate;
@property (readonly, nonatomic) NSMutableSet *identifiedCardSectionViewProviders;
@property (retain, nonatomic) id<CRCard> loadedCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_allViewConfigurations;
- (void)_loadIdentifiedCardSectionViewProvidersFromCard:(id)a0 identifiedProviders:(id)a1 delegate:(id)a2 completion:(id /* block */)a3;
- (id)_viewConfigurationForCardSection:(id)a0 providerIdentifier:(id)a1;
- (BOOL)cardSectionShouldBeDisplayed:(id)a0;
- (id)viewConfigurationForCardSection:(id)a0;

@end

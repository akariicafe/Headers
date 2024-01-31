@class NSString, NTKGreenfieldDraftRecipe;

@interface NTKGreenfieldCompanionActivityViewController : UIActivityViewController <UIActivityViewControllerObjectManipulationDelegate, NTKGreenfieldCompanionActivityItemProviderDelegate> {
    NTKGreenfieldDraftRecipe *_draftRecipe;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_customizationGroupsForActivityViewController:(id)a0;
- (void)_handleCustomizationValueChange:(id)a0 sharingOption:(id)a1;
- (void)companionActivityItemProvider:(id)a0 handleError:(id)a1;
- (id)initWithDraftRecipe:(id)a0 previewImage:(id)a1;

@end

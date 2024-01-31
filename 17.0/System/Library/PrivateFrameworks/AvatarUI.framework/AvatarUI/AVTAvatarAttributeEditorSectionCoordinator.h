@class NSString, NSMutableDictionary;
@protocol AVTAvatarAttributeEditorControllerSubSelectionDelegate;

@interface AVTAvatarAttributeEditorSectionCoordinator : NSObject <AVTAvatarAttributeEditorControllerSubSelectionDelegate>

@property (retain, nonatomic) NSMutableDictionary *sectionControllers;
@property (weak, nonatomic) id<AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addSectionController:(id)a0;
- (void)attributeEditorSectionController:(id)a0 didDeleteSectionItems:(id)a1;
- (void)attributeEditorSectionController:(id)a0 didSelectSectionItem:(id)a1;
- (void)attributeEditorSectionController:(id)a0 didUpdateSectionItem:(id)a1;
- (void)attributeEditorSectionControllerNeedsLayoutUpdate:(id)a0;
- (BOOL)isCoordinatingForSectionController:(id)a0;
- (void)removeSectionController:(id)a0;

@end

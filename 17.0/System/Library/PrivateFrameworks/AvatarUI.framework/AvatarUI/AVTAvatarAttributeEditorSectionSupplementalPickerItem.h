@class NSString;

@interface AVTAvatarAttributeEditorSectionSupplementalPickerItem : NSObject <AVTAvatarAttributeEditorSectionSupplementalPickerItemInternal, AVTAvatarAttributeEditorSectionSupplementalPickerItem>

@property (readonly, copy, nonatomic) id /* block */ avatarUpdater;
@property (readonly, copy, nonatomic) id /* block */ editorUpdater;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLocalizedName:(id)a0 localizedDescription:(id)a1 avatarUpdater:(id /* block */)a2 editorUpdater:(id /* block */)a3 selected:(BOOL)a4;

@end

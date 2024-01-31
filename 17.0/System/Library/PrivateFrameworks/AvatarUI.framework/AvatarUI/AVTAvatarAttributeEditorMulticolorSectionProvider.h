@class AVTAvatarAttributeEditorMulticolorPickerSection, NSString, NSArray, NSDictionary, AVTAvatarAttributeEditorSectionSupplementalPicker, AVTAvatarAttributeEditorState;

@interface AVTAvatarAttributeEditorMulticolorSectionProvider : NSObject <AVTAvatarAttributeEditorSectionProvider>

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) AVTAvatarAttributeEditorMulticolorPickerSection *pickerSection;
@property (retain, nonatomic) NSArray *pickerItems;
@property (retain, nonatomic) NSArray *subpickers;
@property (retain, nonatomic) NSDictionary *nestedPresetPickers;
@property (retain, nonatomic) AVTAvatarAttributeEditorSectionSupplementalPicker *supplementalPicker;
@property (readonly, nonatomic) AVTAvatarAttributeEditorState *editorState;
@property (readonly, nonatomic) NSArray *subsections;
@property (readonly, nonatomic, getter=allowsRemoval) BOOL allowsRemoval;
@property (readonly, nonatomic) NSArray *subpickerRemovalUpdaters;
@property (readonly, copy, nonatomic) NSArray *sections;

- (void).cxx_destruct;
- (void)createPickerSectionIfNeeded;
- (id)initWithIdentifier:(id)a0 localizedName:(id)a1 subpickers:(id)a2 nestedPresetPickers:(id)a3 supplementalPicker:(id)a4 pickerItems:(id)a5 editorState:(id)a6;
- (id)initWithIdentifier:(id)a0 localizedName:(id)a1 subpickers:(id)a2 subpickerRemovalUpdaters:(id)a3 nestedPresetPickers:(id)a4 supplementalPicker:(id)a5 pickerItems:(id)a6 editorState:(id)a7;
- (id)initWithLocalizedName:(id)a0 subpickers:(id)a1 nestedPresetPickers:(id)a2 supplementalPicker:(id)a3 pickerItems:(id)a4 editorState:(id)a5;
- (id)subpickerSectionIdentifiers;

@end

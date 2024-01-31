@class NSArray, NSString, AVTAvatarAttributeEditorSectionOptions;
@protocol AVTAvatarAttributeEditorSectionSupplementalPicker;

@interface AVTAvatarAttributeEditorMulticolorPickerSection : NSObject <AVTAvatarAttributeEditorSection>

@property (readonly, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSArray *sectionItems;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) AVTAvatarAttributeEditorSectionOptions *options;
@property (nonatomic) unsigned long long intendedDestination;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } separatorInsets;
@property (retain, nonatomic) id<AVTAvatarAttributeEditorSectionSupplementalPicker> supplementalPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *sections;

@end

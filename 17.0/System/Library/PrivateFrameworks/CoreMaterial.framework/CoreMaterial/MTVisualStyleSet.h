@class NSString, NSMutableDictionary;

@interface MTVisualStyleSet : NSObject <MTVisualStyleSetProviding> {
    NSMutableDictionary *_visualStylesToStyleNames;
    NSMutableDictionary *_styleNamesToVisualStylings;
}

@property (readonly, nonatomic) long long visualStyleSetVersion;
@property (readonly, copy, nonatomic) NSString *visualStyleSetName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recipeNameForRecipeFromStyle:(id)a0 fromStyleSetWithName:(id)a1;

- (id)initWithName:(id)a0 visualStyleSetDescription:(id)a1 andDescendantDescriptions:(id)a2;
- (id)visualStylingForStyle:(id)a0;
- (void).cxx_destruct;
- (id)_materialDescriptionForStyle:(id)a0 withProvidedStyles:(id)a1;
- (id)_newMaterialSettingsForStyle:(id)a0 withProvidedStyles:(id)a1;

@end

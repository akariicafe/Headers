@class NSDictionary, NSString;
@protocol MTUserInfoProviding, MTTinting, MTMaterialFiltering;

@interface MTRecipeMaterialSettings : NSObject <MTRecipeMaterialSettingsProviding>

@property (retain, nonatomic) NSDictionary *styles;
@property (readonly, nonatomic) id<MTTinting, MTMaterialFiltering, MTUserInfoProviding> baseMaterialSettings;
@property (readonly, nonatomic) long long materialSettingsVersion;
@property (readonly, copy, nonatomic) NSString *recipeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleSetNameForStyleSetFromRecipeWithName:(id)a0;

- (id)styleNameForCategory:(id)a0;
- (id)_visualStyleSetDescription;
- (void).cxx_destruct;
- (id)initWithRecipeName:(id)a0 andDescription:(id)a1 descendantDescriptions:(id)a2 bundle:(id)a3;
- (id)_newVisualStyleSet;
- (id)_platformColorsStyleSetName;

@end

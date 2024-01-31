@class NSString;

@interface TSWPCharacterStyle : TSSStyle <TSSPreset>

@property (readonly, nonatomic) NSString *presetKind;

+ (id)properties;
+ (id)emphasisProperties;
+ (id)nonEmphasisCharacterProperties;
+ (id)nullStyleName;
+ (id)nullStyleWithContext:(id)a0;
+ (id)propertiesAllowingNSNull;

- (int)writingDirection;
- (BOOL)transformsFontSizes;

@end

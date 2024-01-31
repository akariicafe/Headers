@class NSString;

@interface CAMSemanticStyle : NSObject

@property (readonly, nonatomic) double sceneBias;
@property (readonly, nonatomic) double warmthBias;
@property (readonly, nonatomic) long long presetType;
@property (readonly, nonatomic, getter=isNeutral) BOOL neutral;
@property (readonly, nonatomic, getter=isCustomizable) BOOL customizable;
@property (readonly, nonatomic, getter=isCustomized) BOOL customized;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *presetDisplayName;
@property (readonly, nonatomic) long long makerPreset;

+ (void)getSceneBias:(out double *)a0 warmthBias:(out double *)a1 forPresetType:(long long)a2;
+ (id)defaultStyles;
+ (BOOL)isCustomizablePresetType:(long long)a0;
+ (id)persistenceStringForPresetType:(long long)a0;
+ (id)styleWithDictionary:(id)a0 support:(unsigned long long)a1 error:(id *)a2;
+ (unsigned long long)_indexForPresetString:(id)a0;

- (BOOL)isEqualToSemanticStyle:(id)a0;
- (id)initWithPresetType:(long long)a0 sceneBias:(double)a1 warmthBias:(double)a2;
- (id)dictionaryRepresentationForSupport:(unsigned long long)a0;
- (id)description;
- (id)initWithPresetType:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (long long)_makerPresetWithSceneBias:(double)a0 warmthBias:(double)a1;

@end

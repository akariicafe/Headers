@class NSArray, NSString;

@interface CRScriptCategoryV1 : NSObject <CRScriptCategory> {
    unsigned long long _categoryValue;
}

@property (readonly) NSArray *scriptLocales;
@property (readonly) NSString *categoryName;
@property (readonly) unsigned long long categoryRevision;

+ (id)supportedCategories;
+ (float)confidenceThreshold;
+ (unsigned long long)categoryRevision;
+ (id)sequenceScriptForCategory:(id)a0;
+ (id)verticalLayoutSupportedCategories;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

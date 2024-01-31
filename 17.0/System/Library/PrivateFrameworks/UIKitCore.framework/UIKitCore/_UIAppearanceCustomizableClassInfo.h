@class NSString;

@interface _UIAppearanceCustomizableClassInfo : NSObject {
    BOOL _isGuideClassRoot;
    BOOL _isCustomizableViewClassRoot;
}

@property (readonly, nonatomic) Class _customizableViewClass;
@property (readonly, nonatomic) Class _guideClass;
@property (readonly, nonatomic) NSString *_classReferenceKey;
@property (readonly, nonatomic) unsigned long long _hash;

+ (id)_customizableClassInfoForViewClass:(Class)a0 withGuideClass:(Class)a1;
+ (id)_cachedClassInfoForViewClass:(Class)a0 withGuideClass:(Class)a1;

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)_superClassInfo;
- (BOOL)isEqual:(id)a0;

@end

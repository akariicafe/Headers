@class NSString;

@interface UIAccessibilitySafeCategory : NSObject

@property (copy, nonatomic) NSString *accessibilityIdentifier;

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (id)_installSafeCategoryValidationMethod;
+ (void)_addCategoryMethods:(struct objc_method **)a0 count:(unsigned int)a1 excluding:(SEL *)a2 count:(unsigned int)a3 toClass:(Class)a4 isClass:(BOOL)a5;
+ (id)_installLocalValidationMethodOnClassNamed:(id)a0;
+ (id)_installSafeCategoryOnClass:(Class)a0 isManaged:(BOOL)a1;
+ (void)_installSafeCategoryOnClassNamed:(id)a0;
+ (id)_installSafeCategoryOnClassNamed:(id)a0 isManaged:(BOOL)a1;
+ (void)safeCategoryAddDependenciesToCollection:(id)a0;
+ (Class)safeCategoryTargetClass;

@end

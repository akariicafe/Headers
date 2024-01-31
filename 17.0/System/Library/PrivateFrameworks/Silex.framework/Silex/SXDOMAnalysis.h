@class SXMutableConditionalObjectAnalysis, NSMutableDictionary, SXMutableNamespacedObjectReferences;

@interface SXDOMAnalysis : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_roleToComponentsMap;
    NSMutableDictionary *_componentToRoleMap;
    NSMutableDictionary *_typeToComponentsMap;
    NSMutableDictionary *_componentToTypeMap;
    NSMutableDictionary *_componentStyleToComponentsMap;
    NSMutableDictionary *_componentToComponentStylesMap;
    NSMutableDictionary *_componentTextStyleToComponentsMap;
    NSMutableDictionary *_componentToComponentTextStylesMap;
    NSMutableDictionary *_textStyleToComponentsMap;
    NSMutableDictionary *_componentToTextStylesMap;
    NSMutableDictionary *_componentToChildComponentsMap;
    NSMutableDictionary *_componentToParentComponentMap;
}

@property (readonly, copy, nonatomic) SXMutableConditionalObjectAnalysis *conditionalObjectAnalysis;
@property (readonly, copy, nonatomic) SXMutableNamespacedObjectReferences *namespacedObjectReferences;

- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)childComponentsOfComponent:(id)a0 includeDescendants:(BOOL)a1;
- (id)componentStylesForComponent:(id)a0;
- (id)componentStylesForComponents:(id)a0;
- (id)componentTextStylesForComponent:(id)a0;
- (id)componentTextStylesForComponents:(id)a0;
- (id)componentsForComponentStyle:(id)a0;
- (id)componentsForComponentStyles:(id)a0;
- (id)componentsForComponentTextStyle:(id)a0;
- (id)componentsForComponentTextStyles:(id)a0;
- (id)componentsForTextStyle:(id)a0;
- (id)componentsForTextStyles:(id)a0;
- (id)componentsWithRole:(int)a0;
- (id)componentsWithType:(id)a0;
- (id)containerPathForComponentWithIdentifier:(id)a0;
- (id)identifiersForKey:(id)a0 map:(id)a1;
- (id)identifiersForKeys:(id)a0 map:(id)a1;
- (id)parentComponentOfComponent:(id)a0;
- (void)populateWithSource:(id)a0;
- (int)roleForComponent:(id)a0;
- (id)textStylesForComponent:(id)a0;
- (id)textStylesForComponents:(id)a0;
- (id)typeForComponent:(id)a0;

@end

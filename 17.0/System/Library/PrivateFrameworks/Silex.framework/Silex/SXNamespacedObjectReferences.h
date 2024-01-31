@class NSMutableDictionary;

@interface SXNamespacedObjectReferences : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_componentStyleReferences;
    NSMutableDictionary *_componentTextStyleReferences;
    NSMutableDictionary *_textStyleReferences;
}

- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)componentStyleIdentifierForNamespacedComponentStyleIdentifier:(id)a0 component:(id)a1;
- (id)componentTextStyleIdentifierForNamespacedComponentTextStyleIdentifier:(id)a0 component:(id)a1;
- (id)namespacedComponentStyleIdentifierForIdentifier:(id)a0 component:(id)a1;
- (id)namespacedComponentStyleIdentifiersForIdentifiers:(id)a0 component:(id)a1;
- (id)namespacedComponentTextStyleIdentifierForIdentifier:(id)a0 component:(id)a1;
- (id)namespacedComponentTextStyleIdentifiersForIdentifiers:(id)a0 component:(id)a1;
- (id)namespacedTextStyleIdentifierForIdentifier:(id)a0 component:(id)a1;
- (id)namespacedTextStyleIdentifiersForIdentifiers:(id)a0 component:(id)a1;
- (void)populateWithSource:(id)a0;
- (id)referencesForComponent:(id)a0 map:(id)a1;
- (id)textStyleIdentifierForNamespacedTextStyleIdentifier:(id)a0 component:(id)a1;

@end

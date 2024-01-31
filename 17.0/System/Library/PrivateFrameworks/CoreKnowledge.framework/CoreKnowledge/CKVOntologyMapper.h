@interface CKVOntologyMapper : NSObject

+ (void)_appendSpanProperties:(id)a0 forAppInfoMatch:(id)a1;
+ (void)_appendSpanProperties:(id)a0 forAppShortcutMatch:(id)a1;
+ (void)_appendSpanProperties:(id)a0 forAutoShortcutMatch:(id)a1;
+ (void)_appendSpanProperties:(id)a0 forContactMatch:(id)a1;
+ (void)_appendSpanProperties:(id)a0 forCustomTermMatch:(id)a1;
+ (void)_appendSpanProperties:(id)a0 forGlobalTermMatch:(id)a1;
+ (void)_appendSpanProperties:(id)a0 forHomeEntityMatch:(id)a1;
+ (void)_appendSpanProperties:(id)a0 forLearnedContactMatch:(id)a1;
+ (void)_appendSpanProperties:(id)a0 forLearnedMediaEntityMatch:(id)a1;
+ (void)_appendSpanProperties:(id)a0 forLinkDynamicTermMatch:(id)a1;
+ (void)_appendSpanProperties:(id)a0 forRadioEntityMatch:(id)a1;
+ (id)_entitySpanForMatch:(id)a0 startIndex:(unsigned int)a1 endIndex:(unsigned int)a2 label:(id)a3;
+ (struct optional<std::tuple<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const>> { union { char x0; struct tuple<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const> { struct OntologyNodeName *x0; struct OntologyEdgeName *x1; id x2; } x0; } x1; } x0; BOOL x1; })_ontologyMappingFromFieldType:(long long)a0 fieldComponent:(unsigned char)a1;
+ (struct optional<std::tuple<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const>> { union { char x0; struct tuple<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const> { struct OntologyNodeName *x0; struct OntologyEdgeName *x1; id x2; } x0; } x1; } x0; BOOL x1; })_ontologyMappingFromSpanMatch:(id)a0;
+ (void)_setIdentifiersOnEdgeNode:(id)a0 entitySpan:(id)a1 spanInfo:(id)a2 probability:(float)a3;
+ (id)ontologyGraphFromSpanMatch:(id)a0 outOntologyLabel:(id *)a1;
+ (id)ontologyLabelFromFieldValueWithType:(long long)a0;

@end

@interface TSPKnownFieldVersionRequirementsMap : NSObject {
    struct unique_ptr<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo>, std::default_delete<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo>>> { struct __compressed_pair<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo> *, std::default_delete<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo>>> { void *__value_; } __ptr_; } _map;
}

+ (id)newKnownFieldVersionRequirementsMapForMessage:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 knownFieldRuleProvider:(id)a1;
+ (void *)updateMap:(void *)a0 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a1 byAddingRulesFromKnownFieldRuleProvider:(id)a2;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithMap:(void *)a0;
- (void)saveToArchiver:(id)a0;
- (void)addRulesFromKnownFieldRuleProvider:(id)a0;

@end

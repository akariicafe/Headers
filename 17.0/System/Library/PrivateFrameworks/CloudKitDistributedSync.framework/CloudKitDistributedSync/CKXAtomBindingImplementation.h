@class CKXSchema;

@interface CKXAtomBindingImplementation : NSObject <CKXBinding> {
    struct { unsigned long long siteIdentifier; unsigned long long siteIdentifier_identifier; unsigned long long siteIdentifier_modifier; unsigned long long timestamp; unsigned long long timestamp_siteIdentifier; unsigned long long timestamp_clock; unsigned long long reference; unsigned long long reference_timestamp; unsigned long long atom; unsigned long long atom_version; unsigned long long atom_timestamp; unsigned long long atom_references; unsigned long long atom_atom_type; unsigned long long atom_value; unsigned long long topLevelContainer; unsigned long long topLevelContainer_atoms; unsigned long long timestamp_identifier; unsigned long long timestamp_modifier; unsigned long long timestamp_unordered; unsigned long long location; unsigned long long location_identifier; unsigned long long location_zone_name; unsigned long long location_zone_owner_name; unsigned long long reference_type; unsigned long long reference_location; unsigned long long atom_location; unsigned long long atom_atom_behavior; } tokens;
}

@property (retain, nonatomic) CKXSchema *schema;

- (id)init;
- (void).cxx_destruct;
- (Class)mutableProxyClassForStructToken:(unsigned long long)a0;
- (id)orcHelpers;
- (Class)proxyClassForStructToken:(unsigned long long)a0;
- (unsigned long long)structTokenForClass:(Class)a0;
- (unsigned long long)topLevelStructToken;

@end

@class NSString;

@interface NWConcrete_nw_protocol_definition : NSObject <OS_nw_protocol_definition> {
    struct nw_protocol_identifier { char name[32]; int level; int mapping; } identifier;
    unsigned char unique_identifier[16];
    int variant;
    struct nw_protocol_definition_common_state { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; id /* block */ x10; } *common_state;
    struct nw_protocol_definition_extended_state { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void /* function */ *x27; void /* function */ *x28; void /* function */ *x29; void /* function */ *x30; void /* function */ *x31; unsigned int x32; unsigned int x33; } *extended_state;
    void /* function */ *allocate_options;
    void /* function */ *copy_options;
    void /* function */ *deallocate_options;
    void /* function */ *check_equality_options;
    void /* function */ *compare_options;
    void /* function */ *serialize_options;
    void /* function */ *deserialize_options;
    void /* function */ *allocate_metadata;
    void /* function */ *deallocate_metadata;
    void /* function */ *compare_metadata;
    void /* function */ *serialize_metadata;
    void /* function */ *deserialize_metadata;
    unsigned char framer : 1;
    unsigned char supports_replies : 1;
    unsigned char message_is_stream : 1;
    unsigned char receive_single_message : 1;
    unsigned char multipath : 1;
    unsigned char supports_discontiguous_data : 1;
    unsigned char has_global_definition : 1;
    unsigned char is_proxy : 1;
    unsigned char serialize_in_parameters : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;

@end

@class NSString;

@interface NWConcrete_nw_interface : NSObject <OS_nw_interface> {
    unsigned int index;
    struct nw_interface_details { struct nw_interface_signature { unsigned char signature[20]; unsigned char signature_len; unsigned char ___pad[3]; } ipv4_signature; struct nw_interface_signature { unsigned char signature[20]; unsigned char signature_len; unsigned char ___pad[3]; } ipv6_signature; unsigned int mtu; unsigned int tso_max_segment_size_v4; unsigned int tso_max_segment_size_v6; unsigned int ipv4_netmask; unsigned int ipv4_broadcast; unsigned int hwcsum_flags; unsigned char radio_type; unsigned char expensive : 1; unsigned char constrained : 1; unsigned char tx_start : 1; unsigned char ack_priority : 1; unsigned char carrier_aggregation : 1; unsigned char multilayer_packet_logging : 1; unsigned char has_netmask : 1; unsigned char has_broadcast : 1; unsigned char supports_multicast : 1; unsigned char has_dns : 1; unsigned char has_nat64 : 1; unsigned char ipv4_routable : 1; unsigned char ipv6_routable : 1; unsigned char __pad_bits : 3; unsigned char ___pad[1]; } details;
    unsigned int delegate_index;
    unsigned int generation;
    int type;
    int subtype;
    char name[25];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;

@end

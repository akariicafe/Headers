@class NSString, NSObject;
@protocol OS_nw_array, OS_nw_error;

@interface NWConcrete_nw_content_context : NSObject <OS_nw_content_context> {
    unsigned char packet_id[16];
    char identifier[32];
    NWConcrete_nw_content_context *antecedent;
    unsigned long long expiration_milliseconds;
    unsigned long long enqueue_time;
    double relative_priority;
    NSObject<OS_nw_array> *protocol_metadatas;
    NSObject<OS_nw_error> *error;
    NSObject<OS_nw_array> *connection_group_info;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned char app_type;
    unsigned char app_metadata;
    unsigned char is_final : 1;
    unsigned char expiration_checked : 1;
    unsigned char completed_send : 1;
    unsigned char has_packet_id : 1;
    unsigned char connection_group_connection : 1;
    unsigned char connection_group_multicast : 1;
    unsigned char supports_replies : 1;
    unsigned char is_wake_packet : 1;
    unsigned char has_app_metadata : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

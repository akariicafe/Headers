@class NSUUID, NEFilterPacketProvider, NEFilterPacketContext, NSObject;
@protocol OS_nw_interface;

@interface NEFilterPacketInterpose : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct channel { } *_channel;
    struct channel_attr { } *_attributes;
    int _channel_fd;
    unsigned short _slot_size;
    struct __slot_desc { } *_rx_last_slot;
    struct interpose_frame { unsigned char ring_id; char *buffer; unsigned int bufferLength; unsigned long long packet; struct __user_buflet *buflet; } _frame_buffer;
    struct interpose_frame { unsigned char x0; char *x1; unsigned int x2; unsigned long long x3; struct __user_buflet *x4; } *_current_frame;
    struct channel_ring_desc { } *_rx_ring_ingress;
    struct channel_ring_desc { } *_tx_ring_ingress;
    struct channel_ring_desc { } *_rx_ring_egress;
    struct channel_ring_desc { } *_tx_ring_egress;
    NEFilterPacketProvider *_provider;
    NSObject<OS_nw_interface> *_interface;
    NEFilterPacketContext *_context;
    BOOL _input_suspended;
    BOOL _delay_cancel;
    unsigned int _nexusPort;
    unsigned int _keyLength;
    NSUUID *_flowId;
    NSUUID *_nexusInstance;
    void *_key;
    void *_input_source;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end

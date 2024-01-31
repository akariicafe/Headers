@class NSString;

@interface NWConcrete_nw_protocol_data_array : NSObject <OS_nw_protocol_data_array> {
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } frame_array;
    unsigned int frame_count;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;

@end

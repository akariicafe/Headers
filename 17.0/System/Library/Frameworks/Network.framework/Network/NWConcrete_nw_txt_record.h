@class NSString;

@interface NWConcrete_nw_txt_record : NSObject <OS_nw_txt_record> {
    char *buffer;
    unsigned long long data_len;
    unsigned long long max_data_len;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned char is_dictionary : 1;
    unsigned char __pad_bits : 7;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;

@end

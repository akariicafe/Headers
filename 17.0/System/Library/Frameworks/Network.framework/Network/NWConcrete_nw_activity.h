@class NSString;

@interface NWConcrete_nw_activity : NSObject <OS_nw_activity> {
    unsigned char token[16];
    unsigned long long investigation_identifier;
    unsigned long long start_time;
    unsigned long long end_time;
    unsigned int fragments_quenched;
    struct retained_ptr<NWConcrete_nw_activity *> { NWConcrete_nw_activity *m_obj; } parent;
    struct unfair_mutex { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_mutex; } lock;
    struct description_cache { struct retained_ptr<NSString *> { NSString *m_obj; } description; struct unfair_mutex { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_mutex; } mutex; unsigned char __pad[4]; } description_cache;
    unsigned int label;
    unsigned int domain;
    unsigned int client_metric_count;
    int underlying_error_domain;
    int underlying_error_code;
    int reporting_strategy;
    int completion_reason;
    unsigned char is_retry : 1;
    unsigned char is_lightweight : 1;
    unsigned char activated : 1;
    unsigned char completed : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)redactedDescription;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

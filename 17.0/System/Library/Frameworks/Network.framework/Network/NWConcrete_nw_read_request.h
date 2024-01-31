@class NSObject, NSString, NWConcrete_nw_connection;
@protocol OS_nw_fd_wrapper, OS_dispatch_data, OS_nw_array, OS_nw_error, OS_nw_content_context;

@interface NWConcrete_nw_read_request : NSObject <OS_nw_read_request> {
    NWConcrete_nw_read_request *next;
    NWConcrete_nw_read_request *tail;
    id /* block */ data_completion;
    id /* block */ file_handler;
    id /* block */ data_multiple_completion;
    id /* block */ buffer_completion;
    NWConcrete_nw_connection *connection;
    unsigned int qos_class;
    int variant;
    unsigned long long min;
    unsigned long long max;
    unsigned long long progress;
    NSObject<OS_nw_fd_wrapper> *fd;
    void *progress_timer_source;
    unsigned int progress_msecs;
    char *buffer;
    NSObject<OS_dispatch_data> *data;
    NSObject<OS_nw_content_context> *context;
    NSObject<OS_nw_content_context> *repliable_message;
    NSObject<OS_nw_error> *error;
    NSObject<OS_nw_array> *read_array;
    NSObject<OS_nw_array> *context_array;
    unsigned char reported : 1;
    unsigned char is_complete : 1;
    unsigned char file_progress_started : 1;
    unsigned char file_finished : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

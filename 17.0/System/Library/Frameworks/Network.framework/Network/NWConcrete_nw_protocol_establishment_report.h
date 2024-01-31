@class NSString, NSObject;
@protocol OS_nw_protocol_definition;

@interface NWConcrete_nw_protocol_establishment_report : NSObject <OS_nw_protocol_establishment_report> {
    unsigned long long handshake_milliseconds;
    unsigned long long handshake_rtt_milliseconds;
    int client_accurate_ecn_state;
    int server_accurate_ecn_state;
    NSObject<OS_nw_protocol_definition> *protocol;
    unsigned char l4s_enabled : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end

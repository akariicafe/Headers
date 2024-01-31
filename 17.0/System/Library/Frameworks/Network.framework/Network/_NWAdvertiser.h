@class NWConcrete_nw_listener, NSArray, NSObject;
@protocol OS_nw_advertise_descriptor, OS_nw_path_evaluator, OS_nw_dictionary, OS_nw_parameters;

@interface _NWAdvertiser : NSObject {
    NWConcrete_nw_listener *listener;
    NSObject<OS_nw_advertise_descriptor> *advertise;
    _NWAdvertiser *parent;
    NSObject<OS_nw_path_evaluator> *evaluator;
    NSObject<OS_nw_parameters> *parameters;
    NSArray *children;
    NSObject<OS_nw_dictionary> *flow_registrations;
    struct _DNSServiceRef_t { } *dnsref;
}

- (void)dealloc;
- (void).cxx_destruct;

@end

@class NSString, NSObject, NWConcrete_nw_candidate_manager;
@protocol OS_nw_path_evaluator, OS_dispatch_data, OS_nw_interface_option_details, OS_nw_interface, OS_nw_endpoint, OS_nw_path;

@interface NWConcrete_nw_candidate : NSObject <OS_nw_candidate> {
    NWConcrete_nw_candidate_manager *manager;
    NSObject<OS_nw_interface_option_details> *details;
    NSObject<OS_nw_endpoint> *destination;
    NSObject<OS_nw_interface> *interface;
    NSObject<OS_nw_path_evaluator> *evaluator;
    NSObject<OS_nw_path> *current_path;
    char priority;
    NSObject<OS_dispatch_data> *local_cid;
    NSObject<OS_dispatch_data> *remote_cid;
    unsigned char original : 1;
    unsigned char ids : 1;
    unsigned char evaluating : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEligible;
- (void)handleNewPath:(id)a0;
- (id)initCandidate:(id)a0 forManager:(id)a1 interface:(id)a2 priority:(char)a3 localCID:(id)a4 remoteCID:(id)a5 evaluator:(id)a6;
- (void)startEvaluator;

@end

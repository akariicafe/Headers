@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SESXPCEventListener : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *registeredDelegates;
    NSMutableDictionary *pendingEvents;
}

+ (void)kickoff;
+ (id)registerOnStream:(id)a0 forEvent:(id)a1 handler:(id)a2;
+ (id)sharedObject;

- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)_dumpState;
- (id)init;
- (void)_handleEvent:(id)a0 payload:(id)a1;
- (void).cxx_destruct;

@end

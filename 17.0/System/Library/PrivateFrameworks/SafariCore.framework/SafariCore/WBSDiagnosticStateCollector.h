@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface WBSDiagnosticStateCollector : NSObject {
    unsigned long long _stateHandler;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _payloadProvider;
}

@property (copy, nonatomic) NSString *logLabel;
@property (readonly, nonatomic, getter=isRegisteredWithSysdiagnose) BOOL registeredWithSysdiagnose;

+ (id)registeredStateCollectorWithLogLabel:(id)a0 payloadProvider:(id /* block */)a1;

- (void)unregister;
- (void)dealloc;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)_createOSStateDataWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (id)initWithLogLabel:(id)a0 queue:(id)a1 payloadProvider:(id /* block */)a2;
- (id)initWithLogLabel:(id)a0 payloadProvider:(id /* block */)a1;
- (void).cxx_destruct;
- (void)registerWithSysdiagnose;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)test_createOSStateDataWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;

@end

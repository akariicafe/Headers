@interface FMStateCapture : NSObject

@property (nonatomic) unsigned long long handle;
@property (copy, nonatomic) id /* block */ stateCaptureBlock;

- (id)init;
- (void)unregisterHandlerforStateCapture;
- (void)dealloc;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)stateDataForDictionary:(id)a0 title:(id)a1;
- (void).cxx_destruct;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)_stateCapture;
- (void)registerHandlerforStateCapture;

@end

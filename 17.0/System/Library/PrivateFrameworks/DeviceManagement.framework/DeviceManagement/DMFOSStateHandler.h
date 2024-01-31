@class NSString, NSObject;
@protocol OS_os_transaction;

@interface DMFOSStateHandler : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long handle;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;

- (void)dealloc;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)_serializeState;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 name:(id)a1 stateHandlerBlock:(id /* block */)a2;

@end

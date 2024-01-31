@class NSObject;
@protocol OS_dispatch_queue;

@interface SUMescalSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _complete;
    struct FairPlayHWInfo_ { unsigned int IDLength; unsigned char ID[20]; } _hardwareInfo;
    struct FPSAPContextOpaque_ { } *_session;
}

@property (readonly, getter=isComplete) BOOL complete;

- (id)signData:(id)a0 error:(id *)a1;
- (id)init;
- (id)exchangeData:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)verifyPrimeSignature:(id)a0 error:(id *)a1;
- (void)_teardownSession;
- (id)_newDataWithBytes:(char *)a0 length:(unsigned int)a1;
- (id)primeForAccountCreationWithData:(id)a0 error:(id *)a1;

@end

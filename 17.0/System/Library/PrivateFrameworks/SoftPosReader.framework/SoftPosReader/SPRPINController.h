@class SPRPINCrypto;

@interface SPRPINController : SPRObject {
    SPRPINCrypto *_pinCrypto;
}

- (void).cxx_destruct;
- (id)generatePINBlockAndReturnError:(id *)a0;
- (BOOL)capturePINWithParameters:(id)a0 error:(id *)a1;
- (BOOL)addDigitWithValue:(unsigned char)a0 error:(id *)a1;
- (void)cancelPINCapture;
- (BOOL)removeLastDigitAndReturnError:(id *)a0;
- (BOOL)updateParameters:(id)a0 error:(id *)a1;
- (BOOL)verifyWithPINToken:(id)a0 error:(id *)a1;

@end

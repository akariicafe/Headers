@class NSArray, NSData;

@interface STSFieldNFC : STSField

@property (readonly) unsigned int terminalMode;
@property (readonly) unsigned int nfcTechnology;
@property (readonly) unsigned short systemCode;
@property (readonly) NSArray *tcis;
@property (readonly) NSData *openLoopSchemeBitfield;

- (void).cxx_destruct;
- (void)setSystemCode:(unsigned short)a0;
- (void)setTerminalMode:(unsigned int)a0;
- (void)setNFCTechnology:(unsigned int)a0;
- (void)setOpenLoopSchemeBitfield:(id)a0;
- (void)setTCIS:(id)a0;

@end

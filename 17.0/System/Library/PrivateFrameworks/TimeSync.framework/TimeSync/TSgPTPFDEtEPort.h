@class TSgPTPPortStatistics, TSXgPTPFDEtEPort, TSDgPTPFDEtEPort;

@interface TSgPTPFDEtEPort : TSgPTPNetworkPort {
    TSDgPTPFDEtEPort *_implDC;
    TSXgPTPFDEtEPort *_implXPC;
}

@property (retain, nonatomic) TSgPTPPortStatistics *statistics;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithImplDC:(id)a0;
- (id)initWithImplXPC:(id)a0;
- (void)updateWithXPCStatistics:(id)a0;

@end

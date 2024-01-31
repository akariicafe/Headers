@class VMUDebugTimer;
@protocol VMUCommonGraphInterface, VMUStackLogReader;

@interface VMUStackLogConsolidator : NSObject {
    id<VMUCommonGraphInterface> _scannerOrGraph;
    id<VMUStackLogReader> _stackLogReader;
}

@property (retain, nonatomic) VMUDebugTimer *debugTimer;

- (void).cxx_destruct;
- (id)callTreeWithOptions:(unsigned long long)a0 nodeFilter:(id /* block */)a1;
- (id)initWithGraph:(id)a0 stackLogReader:(id)a1;
- (id)initWithScannerOrGraph:(id)a0 stackLogReader:(id)a1;
- (id)stackIDsToNodesFilteredBy:(id /* block */)a0;

@end

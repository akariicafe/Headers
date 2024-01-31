@class AXAuditObjectTransportInfo;

@interface AXAuditObjectTransportInfoMasquerade : AXAuditObjectTransportInfo

@property (retain, nonatomic) Class masqueradeAsClass;
@property (retain, nonatomic) AXAuditObjectTransportInfo *masqueradeTransportInfo;
@property (copy, nonatomic) id /* block */ createMasqueradeObjectBlock;
@property (copy, nonatomic) id /* block */ createLocalObjectWithMasqueradeObjectBlock;

- (id)init;
- (void).cxx_destruct;
- (void)_initializeBlocks;

@end

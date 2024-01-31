@class PGConsolidatedAddress, PGGraphPublicEventNode;

@interface PGResolvablePublicEventBusinessItem : NSObject

@property (readonly, nonatomic) PGGraphPublicEventNode *publicEventNode;
@property (readonly, nonatomic) PGConsolidatedAddress *consolidatedAddress;
@property (readonly, nonatomic) unsigned long long businessItemMuid;

- (void).cxx_destruct;
- (id)initWithPublicEventNode:(id)a0 consolidatedAddress:(id)a1 businessItemMuid:(unsigned long long)a2;

@end

@class NSMapTable, NSSet, WFInterface, NSMutableSet, CWFInterface;
@protocol WFGasQueryControllerDelegate;

@interface WFGasQueryController : NSObject

@property (retain, nonatomic) NSMapTable *gasResponseCache;
@property (retain, nonatomic) NSMutableSet *resolvedNetworks;
@property (retain, nonatomic) WFInterface *interface;
@property (retain, nonatomic) CWFInterface *cInterface;
@property (weak, nonatomic) id<WFGasQueryControllerDelegate> delegate;
@property (readonly, nonatomic) NSSet *profiles;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (id)_ANQPDictionaryFromScanResult:(id)a0;
- (id)_defaultANQPParameterForNetworks:(id)a0;
- (void)_processANQPResults:(id)a0 scanRecords:(id)a1 error:(id)a2;
- (id)profileForNetwork:(id)a0;
- (void)removeAllProfiles;
- (void)removeProfileForNetwork:(id)a0;
- (void)resolveProfileForNetwork:(id)a0 handler:(id /* block */)a1 force:(BOOL)a2;
- (void)resolveProfilesForNetworks:(id)a0;

@end

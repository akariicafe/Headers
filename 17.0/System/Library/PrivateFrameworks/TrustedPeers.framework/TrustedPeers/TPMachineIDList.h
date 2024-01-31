@class NSArray;

@interface TPMachineIDList : NSObject

@property (readonly) NSArray *entries;

- (id)machineIDsInStatus:(unsigned long long)a0;
- (id)entryFor:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEntries:(id)a0;

@end

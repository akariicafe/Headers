@class RTStateModelOneState, RTStateModelEntryExit;

@interface RTMigrationHelperOneStateAndEntryExitPair : NSObject

@property (retain, nonatomic) RTStateModelOneState *oneState;
@property (retain, nonatomic) RTStateModelEntryExit *entryExit;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithOneState:(id)a0 entryExit:(id)a1;

@end

@class NSDictionary, NSString;

@interface SBIconProfileModelMemoryStore : NSObject <SBIconModelStore>

@property (copy, nonatomic) NSDictionary *currentState;
@property (copy, nonatomic) NSDictionary *desiredState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)saveDesiredIconState:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)loadDesiredIconState:(id *)a0;
- (BOOL)saveCurrentIconState:(id)a0 error:(id *)a1;
- (id)loadCurrentIconState:(id *)a0;
- (BOOL)deleteCurrentIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)initWithCurrentState:(id)a0 desiredState:(id)a1;
- (id)initWithITunesRepresentation:(id)a0;

@end

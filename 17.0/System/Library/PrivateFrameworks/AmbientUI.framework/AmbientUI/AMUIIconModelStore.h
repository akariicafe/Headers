@class NSString, PRSPosterConfiguration;
@protocol AMUIIconModelStoreDelegate;

@interface AMUIIconModelStore : NSObject <SBIconModelStore>

@property (weak, nonatomic) PRSPosterConfiguration *posterConfiguration;
@property (weak, nonatomic) id<AMUIIconModelStoreDelegate> iconModelStoreDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)saveDesiredIconState:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)loadDesiredIconState:(id *)a0;
- (BOOL)saveCurrentIconState:(id)a0 error:(id *)a1;
- (id)loadCurrentIconState:(id *)a0;
- (BOOL)deleteCurrentIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;

@end

@class NSURL, NSString;

@interface SBIconModelPropertyListFileStore : NSObject <SBIconModelStore, BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSURL *currentIconStateURL;
@property (readonly, copy, nonatomic) NSURL *desiredIconStateURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)_save:(id)a0 url:(id)a1 error:(id *)a2;
- (id)_load:(id)a0 error:(id *)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)saveDesiredIconState:(id)a0 error:(id *)a1;
- (id)initWithIconStateURL:(id)a0 desiredIconStateURL:(id)a1;
- (void).cxx_destruct;
- (BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)succinctDescription;
- (id)loadDesiredIconState:(id *)a0;
- (BOOL)saveCurrentIconState:(id)a0 error:(id *)a1;
- (id)loadCurrentIconState:(id *)a0;
- (BOOL)_delete:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)deleteCurrentIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;

@end

@class NSString;

@interface DEFile : NSObject

@property struct shared_ptr<siri::dialogengine::File> { struct File *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property (retain) NSString *paramsFilename;
@property (retain) NSString *id;
@property (retain) NSString *localeFilename;

- (id)init;
- (id)execute:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getRoot;
- (void)addPhrase:(id)a0;
- (id)getDialogs;
- (id)getFormatVersion;
- (id)getParameters;
- (struct shared_ptr<siri::dialogengine::File> { struct File *x0; struct __shared_weak_count *x1; })getSharedPtr;
- (id)getValidationErrors;
- (id)getValidationWarnings;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::File> { struct File *x0; struct __shared_weak_count *x1; })a0;

@end

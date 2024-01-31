@class NSString, MLModelConfiguration, MLModelDescription, NSURL;

@interface MLE5ProgramLibraryOnDeviceAOTCompilationImpl : NSObject <MLE5ProgramLibraryImpl> {
    NSURL *_milTextURL;
    struct shared_ptr<MIL::IRProgram> { struct IRProgram *__ptr_; struct __shared_weak_count *__cntrl_; } _irProgram;
    id /* block */ _deallocator;
}

@property (readonly, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, copy, nonatomic) NSString *modelDisplayName;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct e5rt_program_library { } *)createProgramLibraryHandleWithRespecialization:(BOOL)a0 error:(id *)a1;
- (id)initWithIRProgram:(void *)a0 modelDescription:(id)a1 configuration:(id)a2 deallocator:(id /* block */)a3;
- (id)initWithMILTextAtURL:(id)a0 irProgram:(void *)a1 deallocator:(id /* block */)a2 modelDescription:(id)a3 configuration:(id)a4;
- (id)initWithMILTextAtURL:(id)a0 modelDescription:(id)a1 configuration:(id)a2;

@end

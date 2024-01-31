@class NSURL, NSString;

@interface MLE5ProgramLibraryE5BundleImpl : NSObject <MLE5ProgramLibraryImpl>

@property (readonly, nonatomic) NSURL *e5BundleURL;
@property (readonly, copy, nonatomic) NSString *modelDisplayName;

- (void).cxx_destruct;
- (struct e5rt_program_library { } *)createProgramLibraryHandleWithRespecialization:(BOOL)a0 error:(id *)a1;
- (id)initWithE5BundleAtURL:(id)a0 modelDisplayName:(id)a1;

@end

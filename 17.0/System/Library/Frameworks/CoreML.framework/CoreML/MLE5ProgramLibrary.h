@class MLModelConfiguration, NSString, NSObject;
@protocol OS_dispatch_queue, MLE5ProgramLibraryImpl;

@interface MLE5ProgramLibrary : NSObject {
    struct e5rt_program_library { } *_programLibraryHandle;
}

@property (readonly, nonatomic) id<MLE5ProgramLibraryImpl> impl;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *lazyInitQueue;
@property (readonly, nonatomic) MLModelConfiguration *modelConfiguration;
@property (readonly, copy, nonatomic) NSString *modelDisplayName;

- (void)dealloc;
- (void).cxx_destruct;
- (struct e5rt_program_library { } *)_programLibraryHandleWithForceRespecialization:(BOOL)a0 error:(id *)a1;
- (struct e5rt_execution_stream_operation { } *)createOperationForFunctionName:(id)a0 forceRespecialization:(BOOL)a1 error:(id *)a2;
- (id)initWithE5BundleAtURL:(id)a0 modelDisplayName:(id)a1;
- (id)initWithIRProgram:(void *)a0 modelDescription:(id)a1 configuration:(id)a2 deallocator:(id /* block */)a3;
- (id)initWithImpl:(id)a0 configuration:(id)a1;
- (id)initWithMILTextAtURL:(id)a0 modelDescription:(id)a1 configuration:(id)a2;
- (BOOL)prepareAndReturnError:(id *)a0;
- (id)segmentationAnalyticsAndReturnError:(id *)a0;

@end

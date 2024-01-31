@class NSArray;

@interface SNNMILProgram : NSObject {
    struct shared_ptr<MIL::IRProgram> { struct IRProgram *__ptr_; struct __shared_weak_count *__cntrl_; } _program;
}

@property (readonly, nonatomic) NSArray *functionNames;

- (id).cxx_construct;
- (void)writeToFile:(id)a0;
- (id)description;
- (id)functionWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithProgram:(struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> { struct __compressed_pair<MIL::IRProgram *, std::default_delete<MIL::IRProgram>> { struct IRProgram *x0; } x0; })a0;
- (id)initWithContentsOfURL:(id)a0 context:(id)a1 error:(id *)a2;
- (struct shared_ptr<MIL::IRProgram> { struct IRProgram *x0; struct __shared_weak_count *x1; })milProgram;
- (id)serializeToProtobufWithError:(id *)a0;

@end

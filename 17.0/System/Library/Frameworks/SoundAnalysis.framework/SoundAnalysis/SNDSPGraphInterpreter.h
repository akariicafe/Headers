@interface SNDSPGraphInterpreter : NSObject {
    struct unique_ptr<DSPGraph::Interpreter, std::default_delete<DSPGraph::Interpreter>> { struct __compressed_pair<DSPGraph::Interpreter *, std::default_delete<DSPGraph::Interpreter>> { struct Interpreter *__value_; } __ptr_; } _interpreter;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

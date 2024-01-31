@class SNNMILContext, SNNMILProgram, SNNMILSourceLocation, NSMutableArray;

@interface SNNMILProgramBuilder : NSObject

@property (readonly, nonatomic) SNNMILContext *context;
@property (readonly, nonatomic) SNNMILProgram *program;
@property (readonly, nonatomic) SNNMILSourceLocation *location;
@property (readonly, nonatomic) NSMutableArray *functionBuilders;

- (id)init;
- (id)build;
- (void).cxx_destruct;
- (id)functionWithName:(id)a0 location:(id)a1;
- (id)initWithContext:(id)a0 location:(id)a1;
- (struct unique_ptr<MIL::Location, std::default_delete<MIL::Location>> { struct __compressed_pair<MIL::Location *, std::default_delete<MIL::Location>> { struct Location *x0; } x0; })milLocation;

@end

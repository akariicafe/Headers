@class NSArray;

@interface MPSGraphPlaceholderOp : MPSGraphOperation

@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) unsigned int dataType;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 shape:(id)a1 dataType:(unsigned int)a2 name:(id)a3;
- (id)initWithGraph:(id)a0 shape:(id)a1 dataType:(unsigned int)a2 value:(struct Value { struct ValueImpl *x0; })a3 name:(id)a4;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;

@end

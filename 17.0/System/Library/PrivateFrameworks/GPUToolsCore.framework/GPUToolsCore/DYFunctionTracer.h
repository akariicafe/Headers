@class NSString, NSMutableDictionary;
@protocol DYFunctionTracerDelegate;

@interface DYFunctionTracer : NSObject {
    unsigned int array_counter;
    unsigned int buffer_counter;
    BOOL _prependReceiverEffective;
    unsigned long long _currentReceiverID;
    BOOL _compactEffective;
}

@property (nonatomic) BOOL compilable;
@property (nonatomic) BOOL emitFunctionComments;
@property (nonatomic) BOOL emitHiddenReceiverArgument;
@property (nonatomic) BOOL prependReceiverArgument;
@property (nonatomic) BOOL useHexadecimalFloatFormat;
@property (nonatomic) BOOL compactFloats;
@property (nonatomic) BOOL compact;
@property (nonatomic) BOOL emitDataIndices;
@property (nonatomic) BOOL emitTypeSuffixes;
@property (nonatomic) BOOL emitAssociatedFunctions;
@property (nonatomic) BOOL emitVariables;
@property (nonatomic) BOOL emitErrors;
@property (readonly, nonatomic) NSString *nilString;
@property (readonly, retain, nonatomic) NSMutableDictionary *urlIndices;
@property (weak, nonatomic) id<DYFunctionTracerDelegate> delegate;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)_appendTraceLine:(id)a0 withFunction:(const struct Function { struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } x0; unsigned long long x1; unsigned long long x2; unsigned long long *x3; unsigned short x4; unsigned short x5; int x6; void *x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; struct Function *x12; void *x13; } *)a1 iterArgument:(struct array_iterator<const GPUTools::FD::Argument> { struct Argument *x0; })a2 argumentStrings:(id)a3 returnVariable:(id)a4;
- (void)_emitErrors:(id)a0 function:(const struct Function { struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } x0; unsigned long long x1; unsigned long long x2; unsigned long long *x3; unsigned short x4; unsigned short x5; int x6; void *x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; struct Function *x12; void *x13; } *)a1;
- (unsigned int)_objectNameFromVariable:(const char *)a0;
- (void)_prependReceiver:(id)a0 function:(const struct Function { struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } x0; unsigned long long x1; unsigned long long x2; unsigned long long *x3; unsigned short x4; unsigned short x5; int x6; void *x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; struct Function *x12; void *x13; } *)a1;
- (void)_setCurrentReceiver:(const struct Function { struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } x0; unsigned long long x1; unsigned long long x2; unsigned long long *x3; unsigned short x4; unsigned short x5; int x6; void *x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; struct Function *x12; void *x13; } *)a0;
- (BOOL)_skipFirstArgumentForFunction:(const struct Function { struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } x0; unsigned long long x1; unsigned long long x2; unsigned long long *x3; unsigned short x4; unsigned short x5; int x6; void *x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; struct Function *x12; void *x13; } *)a0;
- (id)_stringForScalar1DArrayArgument:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a0 usingBlock:(id /* block */)a1;
- (id)_stringWithIntegerNumber:(id)a0 coreType:(unsigned int)a1;
- (id)_stringWithNumber:(id)a0 argument:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a1;
- (id)rewriteReceiver:(unsigned long long)a0;
- (id)typeStringForArgument:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a0;
- (id)valueStringForArgument:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a0;
- (id)variableForReceiverID:(unsigned long long)a0;
- (id)variableForReceiverIDNumber:(id)a0;
- (void)_appendReturnValueToTraceLine:(id)a0 withFunction:(const struct Function { struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } x0; unsigned long long x1; unsigned long long x2; unsigned long long *x3; unsigned short x4; unsigned short x5; int x6; void *x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; struct Function *x12; void *x13; } *)a1 iterArgument:(struct array_iterator<const GPUTools::FD::Argument> { struct Argument *x0; })a2 argumentStrings:(id)a3 returnVariable:(id)a4;
- (void)_enumerateScalar1DArrayArgumentValues:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a0 usingBlock:(id /* block */)a1;
- (id)_newNumberForScalarArgument:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a0;
- (id)_stringForScalarArgument:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a0;
- (id)createArgument:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a0 forFunction:(const struct Function { struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } x0; unsigned long long x1; unsigned long long x2; unsigned long long *x3; unsigned short x4; unsigned short x5; int x6; void *x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; struct Function *x12; void *x13; } *)a1 withValue:(id)a2;
- (id)getCastForArgument:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a0 inFunction:(const struct Function { struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } x0; unsigned long long x1; unsigned long long x2; unsigned long long *x3; unsigned short x4; unsigned short x5; int x6; void *x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; struct Function *x12; void *x13; } *)a1;
- (id)getIndexFromURL:(id)a0;
- (id)loadStringForURL:(id)a0 variableName:(id)a1 bufferType:(id)a2;
- (id)nextArrayVariable;
- (id)rewriteArgument:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a0;
- (id)rewriteURL:(const char *)a0;
- (id)rewriteVariable:(const char *)a0;
- (id)traceFunction:(const struct Function { struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } x0; unsigned long long x1; unsigned long long x2; unsigned long long *x3; unsigned short x4; unsigned short x5; int x6; void *x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; struct Function *x12; void *x13; } *)a0 error:(id *)a1;
- (id)traceFunction:(const struct Function { struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } x0; unsigned long long x1; unsigned long long x2; unsigned long long *x3; unsigned short x4; unsigned short x5; int x6; void *x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; struct Function *x12; void *x13; } *)a0 returnVariable:(id)a1 error:(id *)a2;
- (id)traceFunctionAsLines:(const struct Function { struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } x0; unsigned long long x1; unsigned long long x2; unsigned long long *x3; unsigned short x4; unsigned short x5; int x6; void *x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; struct Function *x12; void *x13; } *)a0 returnVariable:(id)a1 error:(id *)a2;
- (id)unloadStringForURL:(id)a0;
- (id)valueForArgument:(const struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } *)a0;

@end

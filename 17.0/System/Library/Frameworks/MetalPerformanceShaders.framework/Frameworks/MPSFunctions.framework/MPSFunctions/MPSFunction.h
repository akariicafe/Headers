@class NSString, NSError, CompilationResult;
@protocol MTLFunction, MTLDevice, MTLLibrary;

@interface MPSFunction : NSObject <NSCopying, NSSecureCoding> {
    id<MTLLibrary> _library;
    union { unsigned int bits; struct { unsigned char mpsFunctionVersion : 8; unsigned char intermediateObjectVersion : 8; unsigned short version : 16; } ; } _fileVersion;
    CompilationResult *_compilationResult;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) id<MTLDevice> device;
@property (readonly, retain, nonatomic) id<MTLFunction> function;
@property (readonly, retain, nonatomic) NSError *error;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)buildAsync:(id)a0 withLibrary:(id)a1;
- (void)buildIsCompleteWithFunction:(id)a0 error:(id)a1;
- (void)buildStitchedFunctionAsyncWithName:(id)a0;
- (id)functionPrototype;
- (id)initWithCoder:(id)a0 device:(id)a1 error:(id *)a2;
- (id)initWithDevice:(id)a0 functionName:(id)a1 zone:(struct _NSZone { } *)a2 error:(id *)a3;
- (id)newDAGUsingFunctionList:(id)a0;

@end

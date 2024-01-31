@class NSArray, NSObject;
@protocol OS_dispatch_data;

@interface MTLBinaryEntry : NSObject

@property (readonly) NSObject<OS_dispatch_data> *data;
@property (readonly) NSArray *importedSymbols;
@property (readonly) NSArray *importedLibraries;
@property (readonly) int reflectionFlags;
@property (readonly) unsigned long long binaryPosition;
@property unsigned long long index;
@property NSObject<OS_dispatch_data> *bitcode;
@property NSObject<OS_dispatch_data> *airScript;
@property (readonly) NSObject<OS_dispatch_data> *reflectionBlock;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (id)description;
- (void)addReflectionWithData:(id)a0 flag:(int)a1;
- (id)initWithData:(id)a0 binaryPosition:(unsigned long long)a1;
- (id)initWithData:(id)a0 importedSymbols:(id)a1 importedLibraries:(id)a2;
- (id)initWithData:(id)a0 reflectionBlock:(id)a1;
- (id)initWithData:(id)a0 reflectionBlock:(id)a1 binaryPosition:(unsigned long long)a2;
- (void)internalInitWithData:(id)a0 reflectionBlock:(id)a1 binaryPosition:(unsigned long long)a2;

@end

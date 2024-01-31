@class MTLCompileOptions;

@interface DYMTLLibraryInfo : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) id code;
@property (readonly, nonatomic) MTLCompileOptions *compileOptions;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 code:(id)a1 compileOptions:(id)a2;

@end

@class NSString, NSCharacterSet;

@interface SGSymbolicMappingTransformer : NSObject <PMLTransformerProtocol>

@property (retain) NSString *numericMapping;
@property (retain) NSString *characterMapping;
@property (retain) NSCharacterSet *characterSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withNumericMapping:(id)a0 andSymbolicMapping:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithNumericMapping:(id)a0 andSymbolicMapping:(id)a1;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (BOOL)isEqualToSymbolicMappingTransformer:(id)a0;
- (id)toPlistWithChunks:(id)a0;
- (id)transform:(id)a0;

@end

@class NSDictionary, NSString, MIOParserContext, NSData, MIOModelDescription, MIOVersionInfo, NSArray;

@interface MIOSpecificationModel : NSObject <MIOModeling> {
    struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> { struct __compressed_pair<MIL::IRProgram *, std::default_delete<MIL::IRProgram>> { struct IRProgram *__value_; } __ptr_; } _irProgram;
}

@property (readonly, copy, nonatomic) NSData *specificationData;
@property (readonly, copy, nonatomic) MIOParserContext *parserContext;
@property (readonly, copy, nonatomic) MIOVersionInfo *specificationVersion;
@property (readonly, copy, nonatomic) NSString *modelTypeName;
@property (copy, nonatomic) MIOModelDescription *modelDescription;
@property (readonly, copy, nonatomic) NSArray *layers;
@property (readonly, copy, nonatomic) NSArray *subModels;
@property (readonly, copy, nonatomic) NSDictionary *layerHistogram;
@property (readonly, nonatomic) void *irProgram;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessageStream:(struct CodedInputStream { char *x0; char *x1; struct ZeroCopyInputStream *x2; int x3; int x4; unsigned int x5; BOOL x6; BOOL x7; int x8; int x9; int x10; int x11; int x12; BOOL x13; struct DescriptorPool *x14; struct MessageFactory *x15; } *)a0 parserContext:(id)a1 error:(id *)a2;
- (id)initWithSpecificationData:(id)a0 parserContext:(id)a1 error:(id *)a2;

@end

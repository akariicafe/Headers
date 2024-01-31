@class NSString, SIRINLUEXTERNALUsoGraph;

@interface UPSpan : NSObject

@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) unsigned long long type;
@property (readonly, copy) NSString *category;
@property (readonly, nonatomic) SIRINLUEXTERNALUsoGraph *sharedEntityGraph;

+ (unsigned long long)_getSpanTypeFromProtobufSpan:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithProtobufSpan:(id)a0 nonWhitespaceTokenIndexes:(id)a1 error:(id *)a2;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 type:(unsigned long long)a1 category:(id)a2;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 type:(unsigned long long)a1 category:(id)a2 sharedEntityGraph:(id)a3;

@end

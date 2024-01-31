@class USOGraph, NSString, CKVMatchingSpanMetadata, KVSpanMatchResult;

@interface CKVMatchingSpan : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) KVSpanMatchResult *spanMatchResult;
@property (readonly, nonatomic) USOGraph *ontologyGraph;
@property (readonly, nonatomic) NSString *ontologyLabel;
@property (readonly, nonatomic) NSString *semanticValue;
@property (readonly, nonatomic) unsigned long long beginIndex;
@property (readonly, nonatomic) unsigned long long endIndex;
@property (readonly, nonatomic) NSString *itemId;
@property (readonly, nonatomic) NSString *originAppId;
@property (readonly, nonatomic) CKVMatchingSpanMetadata *metadata;
@property (readonly, nonatomic) float score;

+ (id)matchingSpanFromSpanMatchResult:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSpanMatchResult:(id)a0 ontologyGraph:(id)a1 ontologyLabel:(id)a2 semanticValue:(id)a3 beginIndex:(unsigned long long)a4 endIndex:(unsigned long long)a5 itemId:(id)a6 originAppId:(id)a7 score:(float)a8 matchScore:(float)a9 priorInfo:(id)a10;
- (BOOL)isEqualToMatchingSpan:(id)a0;
- (id)ontologyGraphData:(id *)a0;

@end

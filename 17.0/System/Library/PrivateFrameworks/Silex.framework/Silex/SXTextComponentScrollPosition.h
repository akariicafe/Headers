@interface SXTextComponentScrollPosition : SXComponentScrollPosition

@property (readonly, nonatomic) long long characterIndex;
@property (readonly, nonatomic) double relativeTextOffset;

+ (BOOL)supportsSecureCoding;
+ (BOOL)jsonDictionaryRepresentationIsValid:(id)a0 exactly:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)initWithComponentIdentifier:(id)a0 canvasWidth:(double)a1 relativePageOffset:(double)a2 characterIndex:(long long)a3 relativeTextOffset:(double)a4;
- (id)initWithDictionaryRepresentation:(id)a0 exactly:(BOOL)a1;

@end

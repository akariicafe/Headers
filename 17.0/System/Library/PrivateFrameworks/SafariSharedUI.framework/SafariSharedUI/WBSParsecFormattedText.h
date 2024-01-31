@class NSString, WBSParsecImageRepresentation, NSNumber;

@interface WBSParsecFormattedText : WBSParsecModel

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic, getter=isEmphasized) BOOL emphasized;
@property (readonly, nonatomic) WBSParsecImageRepresentation *glyphRepresentation;
@property (readonly, nonatomic) NSNumber *spaceBeforeInPoints;
@property (readonly, nonatomic) NSNumber *spaceAfterInPoints;

+ (id)schema;

- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)glyphWithSession:(id)a0;

@end

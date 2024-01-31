@class NSString, USOSerializedGraph, NSArray;

@interface SIRINLUSpan : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *input;
@property unsigned int startTokenIndex;
@property unsigned int endTokenIndex;
@property (retain, nonatomic) USOSerializedGraph *usoGraph;
@property double score;
@property (retain, nonatomic) NSArray *matcherNames;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLabel:(id)a0 input:(id)a1 startTokenIndex:(unsigned int)a2 endTokenIndex:(unsigned int)a3 usoGraph:(id)a4 score:(double)a5 matcherNames:(id)a6;

@end

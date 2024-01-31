@class NSString;

@interface RWIProtocolGenericTypesSearchMatch : RWIProtocolJSONObject

@property (nonatomic) double lineNumber;
@property (copy, nonatomic) NSString *lineContent;

- (id)initWithLineNumber:(double)a0 lineContent:(id)a1;

@end

@class NSString;

@interface IKCSSMediaQueryExpression : NSObject

@property long long type;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSString *dimension;
@property (retain, nonatomic) NSString *mediaType;
@property double doubleValue;

- (id)description;
- (void).cxx_destruct;
- (id)valueAsString;
- (BOOL)evaluate;
- (id)expressionAsString;

@end

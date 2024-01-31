@interface IKCSSDeclarationPoint : IKCSSDeclaration

@property (nonatomic) double value;
@property (nonatomic) unsigned long long unit;

- (id)stringValue;
- (id)description;
- (id)number;
- (id)initWithParseDeclaration:(id)a0 info:(id)a1;

@end

@class NSDateFormatter;

@interface ICDateContentMapping : ICContentMapping

@property (retain, nonatomic) NSDateFormatter *dateFormatter;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)getStringRepresentation:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;

@end

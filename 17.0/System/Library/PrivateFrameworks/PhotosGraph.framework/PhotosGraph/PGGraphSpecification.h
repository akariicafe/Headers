@interface PGGraphSpecification : MAGraphSpecification

- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;
- (id)init;
- (id)nodeClassByDomainAndLabel;
- (id)edgeClassByDomainAndLabel;
- (id)nodeClassByDomain;
- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (id)edgeClassByDomain;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;

@end

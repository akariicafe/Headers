@interface ISPropertyListProvider : ISProtocolDataProvider <NSCopying>

- (id)init;
- (BOOL)processDialogFromPropertyList:(id)a0 returningError:(id *)a1;
- (BOOL)processPropertyList:(id)a0 returningError:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

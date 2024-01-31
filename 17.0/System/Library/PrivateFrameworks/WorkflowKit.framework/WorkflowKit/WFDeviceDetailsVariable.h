@interface WFDeviceDetailsVariable : WFVariable

- (id)icon;
- (id)name;
- (BOOL)isAvailable;
- (id)initWithAggrandizements:(id)a0;
- (id)possibleContentClassesWithContext:(id)a0;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;

@end

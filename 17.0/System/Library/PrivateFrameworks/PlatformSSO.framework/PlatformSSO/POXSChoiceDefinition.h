@class NSArray, NSMapTable;

@interface POXSChoiceDefinition : POXSDefinition {
    NSMapTable *_elements;
}

@property (readonly, copy, nonatomic) NSArray *elements;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)elementForValue:(id)a0;
- (void)setName:(id)a0 namespaceURI:(id)a1 forType:(Class)a2;

@end

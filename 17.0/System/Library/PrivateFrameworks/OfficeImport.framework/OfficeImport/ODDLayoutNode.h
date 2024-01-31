@class ODDLayoutVariablePropertySet;

@interface ODDLayoutNode : ODDLayoutObjectList {
    ODDLayoutVariablePropertySet *mVariableList;
}

- (id)variableList;
- (id)description;
- (void).cxx_destruct;
- (void)setVariableList:(id)a0;

@end

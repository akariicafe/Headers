@class SBSystemActionDefaults;

@interface SBSystemActionDefaultsDataSource : SBSystemActionAbstractOverridableDataSource {
    SBSystemActionDefaults *_defaults;
}

- (void).cxx_destruct;
- (id)executorForSystemAction:(id)a0;
- (void)updateSelectedAction;

@end

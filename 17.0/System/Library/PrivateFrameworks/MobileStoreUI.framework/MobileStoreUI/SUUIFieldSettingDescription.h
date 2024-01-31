@class NSString, SUUISettingsGroupController, NSMutableDictionary;

@interface SUUIFieldSettingDescription : SUUISettingDescription <SUUIControllableSettingDescription> {
    long long _fieldType;
    NSMutableDictionary *_fieldValues;
}

@property (readonly, nonatomic) long long fieldType;
@property (weak, nonatomic) SUUISettingsGroupController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_fieldTypeFromElement:(id)a0;
+ (id)_inputViewElementFromElement:(id)a0;
+ (Class)_viewClassForSettingDescription:(id)a0;

- (BOOL)allowsSelection;
- (void).cxx_destruct;
- (void)_dispatchEventOfType:(unsigned long long)a0 extraInfo:(id)a1;
- (id)fieldValueForKey:(id)a0;
- (void)handleSelectionOnCompletion:(id /* block */)a0;
- (id)initWithViewElement:(id)a0 parent:(id)a1;
- (void)setFieldValue:(id)a0 forKey:(id)a1;

@end

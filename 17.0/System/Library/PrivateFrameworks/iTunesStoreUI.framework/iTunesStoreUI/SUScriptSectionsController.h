@class SUScriptSection;

@interface SUScriptSectionsController : SUScriptObject

@property (readonly) id sections;
@property (retain) SUScriptSection *selectedSection;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)_copySectionWithIdentifier:(id)a0;
- (id)_fixedSelectedIdentifier;
- (void)_setSelectedIdentifier:(id)a0;
- (void)_tabBarConfigurationChangedNotification:(id)a0;
- (id)sectionWithIdentifier:(id)a0;
- (void)setRootViewController:(id)a0 forSection:(id)a1;

@end

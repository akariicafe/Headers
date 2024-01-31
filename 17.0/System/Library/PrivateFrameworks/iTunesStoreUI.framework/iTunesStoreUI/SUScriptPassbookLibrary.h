@class NSArray, PKPassLibrary;

@interface SUScriptPassbookLibrary : SUScriptObject {
    PKPassLibrary *_passLibrary;
}

@property (readonly) NSArray *passes;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)passWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1;
- (id)_className;
- (id)attributeKeys;
- (id)initWithPassLibrary:(id)a0;
- (id)scriptAttributeKeys;

@end

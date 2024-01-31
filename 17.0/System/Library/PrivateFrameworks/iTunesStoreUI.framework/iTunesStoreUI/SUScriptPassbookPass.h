@class NSString, PKPass;

@interface SUScriptPassbookPass : SUScriptObject {
    PKPass *_pass;
}

@property (readonly) NSString *passTypeIdentifier;
@property (readonly) NSString *passURL;
@property (readonly) NSString *serialNumber;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)initWithPass:(id)a0;
- (id)scriptAttributeKeys;

@end

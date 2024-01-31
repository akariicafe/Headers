@class NSString;

@interface SUScriptAction : SUScriptObject <NSCopying> {
    NSString *_actionType;
}

@property (copy) NSString *actionType;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (void)performAction;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_className;
- (id)attributeKeys;
- (id)initWithActionType:(id)a0;
- (id)scriptAttributeKeys;

@end

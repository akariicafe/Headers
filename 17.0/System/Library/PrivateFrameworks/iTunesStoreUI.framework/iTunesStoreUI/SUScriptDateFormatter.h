@class NSString, NSDateFormatter;

@interface SUScriptDateFormatter : SUScriptObject {
    NSDateFormatter *_dateFormatter;
}

@property (copy) NSString *dateFormat;
@property unsigned long long dateStyle;
@property (copy) NSString *localeIdentifier;
@property unsigned long long timeStyle;
@property (readonly) unsigned long long dateFormatterFullStyle;
@property (readonly) unsigned long long dateFormatterLongStyle;
@property (readonly) unsigned long long dateFormatterMediumStyle;
@property (readonly) unsigned long long dateFormatterNoStyle;
@property (readonly) unsigned long long dateFormatterShortStyle;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void)dealloc;
- (id)stringFromDate:(id)a0;
- (double)dateFromString:(id)a0;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;

@end

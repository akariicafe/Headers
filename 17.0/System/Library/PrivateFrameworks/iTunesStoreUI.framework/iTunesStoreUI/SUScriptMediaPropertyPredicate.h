@class MPMediaPropertyPredicate, NSString;

@interface SUScriptMediaPropertyPredicate : SUScriptObject {
    NSString *_comparisonType;
    NSString *_property;
    id _value;
}

@property (readonly, nonatomic) MPMediaPropertyPredicate *nativePredicate;
@property (readonly) NSString *comparisonType;
@property (readonly) NSString *property;
@property (readonly) id value;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)initWithProperty:(id)a0 value:(id)a1 comparisonType:(id)a2;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)_playlistAttributesForScriptArray:(id)a0;

@end

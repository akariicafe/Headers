@class NSString;
@protocol WFPropertyListObject;

@interface WFPropertyVariableAggrandizement : WFVariableAggrandizement

@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) id<WFPropertyListObject> propertyUserInfo;
@property (readonly, nonatomic) BOOL negativeProperty;
@property (readonly, nonatomic) NSString *negativePropertyName;

- (id)initWithDictionary:(id)a0;
- (void)applyToContentCollection:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPropertyName:(id)a0 propertyUserInfo:(id)a1;
- (id)initWithPropertyName:(id)a0 propertyUserInfo:(id)a1 negativeProperty:(BOOL)a2 negativePropertyName:(id)a3;
- (id)processedContentClasses:(id)a0;

@end

@class NSString, SGMicrodataItem;

@interface SGMicrodataItemProp : NSObject

@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) SGMicrodataItem *itemValue;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1;

@end

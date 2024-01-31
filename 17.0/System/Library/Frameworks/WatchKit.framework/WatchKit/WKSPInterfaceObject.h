@class NSString;

@interface WKSPInterfaceObject : NSObject

@property (copy, nonatomic) NSString *interfaceProperty;
@property (copy, nonatomic) NSString *viewControllerID;
@property (copy, nonatomic) NSString *propertyIndex;
@property (nonatomic) long long tableIndex;
@property (nonatomic) long long rowIndex;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithInterfaceProperty:(id)a0 viewControllerID:(id)a1 propertyIndex:(long long)a2 tableIndex:(long long)a3 rowIndex:(long long)a4;
- (void)_sendValueChanged:(id)a0;
- (void)_sendValueChanged:(id)a0 forProperty:(id)a1;
- (void)_setupWithDescription:(id)a0 forController:(id)a1;

@end

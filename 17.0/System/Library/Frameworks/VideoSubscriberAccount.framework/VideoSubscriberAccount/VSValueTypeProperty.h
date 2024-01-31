@class NSString, NSSet;

@interface VSValueTypeProperty : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long kind;
@property (copy, nonatomic) NSSet *allowedClasses;
@property (retain, nonatomic) id initialValue;

+ (id)valueTypePropertyWithName:(id)a0 kind:(unsigned long long)a1 allowedClasses:(id)a2 initialValue:(id)a3;

- (void).cxx_destruct;

@end

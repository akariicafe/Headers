@class NSArray;
@protocol NSObject;

@interface SSBagKey : NSObject

@property (readonly, nonatomic) id<NSObject> defaultValue;
@property (readonly, nonatomic) NSArray *stringRepresentation;
@property (readonly, nonatomic) unsigned long long valueType;

- (void).cxx_destruct;
- (id)initWithStringRepresentation:(id)a0 valueType:(unsigned long long)a1;
- (id)initWithStringRepresentation:(id)a0 valueType:(unsigned long long)a1 defaultValue:(id)a2;
- (id)valueFromDictionary:(id)a0;

@end

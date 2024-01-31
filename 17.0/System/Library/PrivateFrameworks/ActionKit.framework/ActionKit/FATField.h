@class NSString;

@interface FATField : NSObject

@property unsigned int index;
@property unsigned int type;
@property BOOL optional;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) Class structClass;
@property (retain, nonatomic) FATField *valueField;
@property (retain, nonatomic) FATField *keyField;

+ (id)fieldWithIndex:(unsigned int)a0 type:(unsigned int)a1 optional:(BOOL)a2 name:(id)a3;
+ (id)fieldWithIndex:(unsigned int)a0 type:(unsigned int)a1 optional:(BOOL)a2 name:(id)a3 keyField:(id)a4 valueField:(id)a5;
+ (id)fieldWithIndex:(unsigned int)a0 type:(unsigned int)a1 optional:(BOOL)a2 name:(id)a3 structClass:(Class)a4;
+ (id)fieldWithIndex:(unsigned int)a0 type:(unsigned int)a1 optional:(BOOL)a2 name:(id)a3 valueField:(id)a4;
+ (id)nameForFatFieldType:(unsigned int)a0;

- (id)description;
- (void).cxx_destruct;

@end

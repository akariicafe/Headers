@class NSString, NSArray;

@interface BMPropertyDefinition : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSArray *enumValues;
@property (readonly, nonatomic) NSArray *classPropertyDefinitions;
@property (readonly, nonatomic) NSString *comment;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 type:(int)a1 enumValues:(id)a2 classPropertyDefinitions:(id)a3 comment:(id)a4;

@end

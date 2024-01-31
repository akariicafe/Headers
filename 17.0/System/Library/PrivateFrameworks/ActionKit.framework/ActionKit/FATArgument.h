@class FATField;

@interface FATArgument : NSObject

@property (retain, nonatomic) FATField *field;
@property (retain, nonatomic) id value;

+ (id)argumentWithField:(id)a0 value:(id)a1;

- (void).cxx_destruct;

@end

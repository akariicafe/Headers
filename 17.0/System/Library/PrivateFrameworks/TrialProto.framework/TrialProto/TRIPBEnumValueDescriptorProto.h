@class NSString, TRIPBEnumValueOptions;

@interface TRIPBEnumValueDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) int number;
@property (nonatomic) BOOL hasNumber;
@property (retain, nonatomic) TRIPBEnumValueOptions *options;
@property (nonatomic) BOOL hasOptions;

+ (id)descriptor;

@end

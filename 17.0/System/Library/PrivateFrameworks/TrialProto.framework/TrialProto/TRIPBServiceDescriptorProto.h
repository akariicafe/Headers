@class NSString, NSMutableArray, TRIPBServiceOptions;

@interface TRIPBServiceDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (retain, nonatomic) NSMutableArray *methodArray;
@property (readonly, nonatomic) unsigned long long methodArray_Count;
@property (retain, nonatomic) TRIPBServiceOptions *options;
@property (nonatomic) BOOL hasOptions;

+ (id)descriptor;

@end

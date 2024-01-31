@class NSString, NSArray;

@interface FLTMutableSSUIntent : FLTSSUIntent

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *parameters;
@property (copy, nonatomic) NSArray *examples;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

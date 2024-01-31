@class NSArray;

@interface EDAMBootstrapInfo : FATObject

@property (retain, nonatomic) NSArray *profiles;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end

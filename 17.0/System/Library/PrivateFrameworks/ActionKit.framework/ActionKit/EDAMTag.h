@class NSString, NSNumber;

@interface EDAMTag : FATObject

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *parentGuid;
@property (retain, nonatomic) NSNumber *updateSequenceNum;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end

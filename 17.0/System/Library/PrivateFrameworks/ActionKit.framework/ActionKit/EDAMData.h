@class NSData, NSNumber;

@interface EDAMData : FATObject

@property (retain, nonatomic) NSData *bodyHash;
@property (retain, nonatomic) NSNumber *size;
@property (retain, nonatomic) NSData *body;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end

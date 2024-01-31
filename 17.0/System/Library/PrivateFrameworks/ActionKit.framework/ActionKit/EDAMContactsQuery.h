@class NSNumber, NSString;

@interface EDAMContactsQuery : FATObject

@property (retain, nonatomic) NSNumber *maxEntries;
@property (retain, nonatomic) NSString *prefix;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end

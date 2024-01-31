@class EDAMSearchRecord;

@interface EDAMLogRequest : FATObject

@property (retain, nonatomic) EDAMSearchRecord *searchRecord;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end

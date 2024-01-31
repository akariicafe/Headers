@class NSNumber;

@interface EDAMNoteLimits : FATObject

@property (retain, nonatomic) NSNumber *noteResourceCountMax;
@property (retain, nonatomic) NSNumber *uploadLimit;
@property (retain, nonatomic) NSNumber *resourceSizeMax;
@property (retain, nonatomic) NSNumber *noteSizeMax;
@property (retain, nonatomic) NSNumber *uploaded;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end

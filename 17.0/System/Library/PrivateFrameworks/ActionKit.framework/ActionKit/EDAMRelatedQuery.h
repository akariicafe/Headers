@class NSString, EDAMNoteFilter;

@interface EDAMRelatedQuery : FATObject

@property (retain, nonatomic) NSString *noteGuid;
@property (retain, nonatomic) NSString *plainText;
@property (retain, nonatomic) EDAMNoteFilter *filter;
@property (retain, nonatomic) NSString *referenceUri;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *cacheKey;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end

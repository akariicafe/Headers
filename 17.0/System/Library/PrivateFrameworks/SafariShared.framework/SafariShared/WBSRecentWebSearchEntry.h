@class NSString, NSDate;

@interface WBSRecentWebSearchEntry : NSObject

@property (readonly) NSString *searchString;
@property (readonly) NSDate *date;

- (id)init;
- (unsigned long long)hash;
- (id)initWithSearchString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithSearchString:(id)a0 date:(id)a1;

@end

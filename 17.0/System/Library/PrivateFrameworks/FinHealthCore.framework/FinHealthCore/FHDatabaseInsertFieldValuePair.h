@class NSString;

@interface FHDatabaseInsertFieldValuePair : NSObject

@property (copy, nonatomic) NSString *fieldName;
@property (copy, nonatomic) NSString *fieldValue;

- (id)description;
- (void).cxx_destruct;
- (id)initWithQuoteWrapOption:(id)a0 fieldValue:(id)a1 quoteWrap:(BOOL)a2;

@end

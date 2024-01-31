@class NSArray, NSString;

@interface PXSearchNavigationAttributes : NSObject

@property (readonly, nonatomic) NSArray *searchTerms;
@property (readonly, nonatomic) NSArray *searchCategories;
@property (readonly, nonatomic) NSString *searchText;
@property (readonly, nonatomic) NSString *completionKey;

+ (id)attributesForURLComponents:(id)a0;
+ (id)attributesWithGenericSearchTerm:(id)a0;
+ (id)attributesWithGenericSearchText:(id)a0;

- (void).cxx_destruct;

@end

@class CNContactStore, NSArray, NSDictionary;

@interface GKContactDataSource : NSObject

@property (retain, nonatomic) CNContactStore *store;
@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSDictionary *contactLookup;
@property (retain, nonatomic) NSArray *sectionHeaders;
@property (retain, nonatomic) NSDictionary *sectionToContactIndexes;
@property (retain, nonatomic) NSArray *skipValues;
@property (retain, nonatomic) NSDictionary *skipToContactIndexes;

- (id)init;
- (void).cxx_destruct;
- (id)fullContactWithIdentifier:(id)a0;
- (void)loadContactsWithHandler:(id /* block */)a0;

@end

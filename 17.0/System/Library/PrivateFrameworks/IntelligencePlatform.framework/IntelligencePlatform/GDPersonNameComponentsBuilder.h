@class NSMutableArray;

@interface GDPersonNameComponentsBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *prefixes;
@property (retain, nonatomic) NSMutableArray *givenNames;
@property (retain, nonatomic) NSMutableArray *middleNames;
@property (retain, nonatomic) NSMutableArray *familyNames;
@property (retain, nonatomic) NSMutableArray *suffixes;
@property (retain, nonatomic) NSMutableArray *nicknames;

- (id)init;
- (void).cxx_destruct;

@end

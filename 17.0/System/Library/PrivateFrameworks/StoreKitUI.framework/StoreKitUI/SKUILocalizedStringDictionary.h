@class NSString, NSArray, NSMutableArray;

@interface SKUILocalizedStringDictionary : NSObject {
    NSArray *_bundles;
    NSMutableArray *_stringTables;
}

@property (readonly, nonatomic) NSString *localeName;

- (id)localizedStringForKey:(id)a0;
- (void).cxx_destruct;
- (id)_stringTableForBundle:(id)a0 tableName:(id)a1;
- (id)initWithLocaleName:(id)a0 bundles:(id)a1;
- (id)localizedStringForKey:(id)a0 inTable:(id)a1;

@end

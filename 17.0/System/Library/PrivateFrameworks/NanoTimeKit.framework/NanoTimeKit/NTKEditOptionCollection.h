@class NSString, NSArray;

@interface NTKEditOptionCollection : NSObject

@property (readonly, nonatomic) long long swatchStyle;
@property (readonly, nonatomic) NSString *optionsDescription;
@property (nonatomic) long long mode;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSArray *options;
@property (nonatomic) unsigned long long collectionType;
@property (copy, nonatomic) NSString *slot;

+ (id)editOptionCollectionWithEditMode:(long long)a0 localizedName:(id)a1 options:(id)a2 collectionType:(unsigned long long)a3;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)filteredCollectionForDevice:(id)a0;
- (id)filteredCollectionWithObjectsPassingTest:(id /* block */)a0;
- (id)initWithEditMode:(long long)a0 localizedName:(id)a1 options:(id)a2 collectionType:(unsigned long long)a3;
- (id)initWithEditMode:(long long)a0 localizedName:(id)a1 options:(id)a2 collectionType:(unsigned long long)a3 slot:(id)a4;

@end

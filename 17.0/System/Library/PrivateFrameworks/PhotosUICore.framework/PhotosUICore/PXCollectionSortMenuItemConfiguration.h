@class NSString;

@interface PXCollectionSortMenuItemConfiguration : NSObject

@property (readonly, nonatomic) long long sortOrder;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) BOOL selected;
@property (readonly, nonatomic) BOOL actionAscending;

- (void).cxx_destruct;
- (id)initWithSortOrder:(long long)a0 title:(id)a1 systemImageName:(id)a2 selected:(BOOL)a3 actionAscending:(BOOL)a4;

@end

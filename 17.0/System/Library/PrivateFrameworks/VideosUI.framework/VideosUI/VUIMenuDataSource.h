@class NSArray;

@interface VUIMenuDataSource : NSObject

@property (retain, nonatomic) NSArray *mainMenuItems;
@property (retain, nonatomic) NSArray *genreMenuItems;
@property (nonatomic) BOOL hasGenresDataForCheckHasItemsOption;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMainMenuItems:(id)a0 genreMenuItems:(id)a1;

@end

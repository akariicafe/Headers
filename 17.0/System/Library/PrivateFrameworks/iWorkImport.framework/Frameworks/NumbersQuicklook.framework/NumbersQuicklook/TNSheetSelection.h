@class TNSheet;

@interface TNSheetSelection : TSKSelection

@property (readonly, retain, nonatomic) TNSheet *sheet;
@property (readonly, nonatomic, getter=isPaginated) BOOL paginated;

+ (Class)archivedSelectionClass;
+ (id)selectionForSheet:(id)a0 paginated:(BOOL)a1;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)UUIDDescription;
- (id)initWithSheet:(id)a0 paginated:(BOOL)a1;

@end

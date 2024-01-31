@class NSString;

@interface TSWPMergeFieldType : NSObject <NSCopying>

@property (copy, nonatomic) NSString *contactsProperty;
@property (copy, nonatomic) NSString *contactsKey;
@property (copy, nonatomic) NSString *contactsLabel;
@property (copy, nonatomic) NSString *tableKey;
@property (readonly, nonatomic) BOOL isFromContacts;
@property (readonly, nonatomic) BOOL isFromTable;
@property (readonly, nonatomic) BOOL isSkipType;

+ (id)skipMergeFieldType;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToArchive:(void *)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithContactsProperty:(id)a0 key:(id)a1 label:(id)a2;
- (id)initWithContactsProperty:(id)a0 key:(id)a1 label:(id)a2 tableKey:(id)a3;
- (id)initWithTableKey:(id)a0;
- (void)loadFromArchive:(const void *)a0;

@end

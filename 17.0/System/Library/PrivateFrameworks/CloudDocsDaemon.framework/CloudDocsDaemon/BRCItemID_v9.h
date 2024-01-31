@class NSString, BRCALRowID;

@interface BRCItemID_v9 : NSObject <PQLValuable> {
    BRCALRowID *_appLibraryRowID;
    unsigned char _kind;
    unsigned char _uuid[16];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newFromSqliteValue:(struct sqlite3_value { } *)a0;

- (id)initWithUUID:(const char *)a0;
- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRootObject:(struct RootItemObject { unsigned char x0; union { unsigned int x0; unsigned int x1; } x1; } *)a0;
- (id)_initAsLibraryRootWithAppLibraryRowID:(id)a0 enclosureUUID:(id)a1;
- (id)initWithUUIDObject:(struct _UUIDItemObject_OLD { unsigned char x0; unsigned int x1; unsigned char x2[16]; } *)a0;
- (id)itemIDString;

@end

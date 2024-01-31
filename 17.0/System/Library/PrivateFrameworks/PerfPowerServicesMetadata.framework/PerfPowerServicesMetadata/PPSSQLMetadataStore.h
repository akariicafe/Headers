@interface PPSSQLMetadataStore : NSObject

+ (id)queryMetadataForFKID:(long long)a0 name:(id)a1 conn:(struct sqlite3 { } *)a2;
+ (struct sqlite3 { } *)openReadConnection:(id)a0;
+ (BOOL)performQuery:(id)a0 conn:(struct sqlite3 { } *)a1;
+ (id)performReadQuery:(id)a0 conn:(struct sqlite3 { } *)a1;
+ (long long)queryIDForSubsystem:(id)a0 category:(id)a1 conn:(struct sqlite3 { } *)a2;
+ (id)queryMetadataForFKID:(long long)a0 conn:(struct sqlite3 { } *)a1;
+ (id)queryMetadataHistoryForFilepath:(id)a0 subsystem:(id)a1 category:(id)a2;
+ (id)queryMetadataHistoryForFilepath:(id)a0 subsystem:(id)a1 category:(id)a2 name:(id)a3;

@end

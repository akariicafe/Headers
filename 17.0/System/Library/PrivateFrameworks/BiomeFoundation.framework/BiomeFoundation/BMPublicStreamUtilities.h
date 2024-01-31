@interface BMPublicStreamUtilities : NSObject

+ (id)streamIdentifiers;
+ (id)libraryPublicStreamMigrationPaths;
+ (long long)streamForStreamIdentifier:(id)a0;
+ (id)streamIdentifierForPreMigrationStream:(long long)a0;
+ (id)streamIdentifierForStream:(long long)a0;
+ (unsigned long long)domainForStream:(long long)a0;
+ (id)allowedStreamWriteIdentifiersForStream:(long long)a0;
+ (id)libraryPublicStreamReverseMigrationPaths;
+ (long long)streamForPreMigrationStreamIdentifier:(id)a0;
+ (BOOL)writeAllowedForStream:(long long)a0 processIdentifier:(id)a1;

@end

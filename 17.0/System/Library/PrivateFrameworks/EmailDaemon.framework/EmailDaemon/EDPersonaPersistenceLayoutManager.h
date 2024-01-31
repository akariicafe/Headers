@class NSString, NSObject;
@protocol OS_os_log;

@interface EDPersonaPersistenceLayoutManager : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)baseAccountDirectoryPathForPersonaIdentifier:(id)a0;
+ (id)baseAccountDirectoryForPersonaIdentifier:(id)a0;
+ (id)iOS_baseAccountDirectoryPathForPersonaIdentifier:(id)a0;
+ (id)macOS_baseAccountDirectoryPathForPersonaIdentifier:(id)a0;


@end

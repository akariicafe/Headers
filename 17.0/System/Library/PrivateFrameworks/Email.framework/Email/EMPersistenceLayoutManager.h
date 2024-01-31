@class NSString, NSURL, NSObject;
@protocol OS_os_log;

@interface EMPersistenceLayoutManager : NSObject <EFLoggable>

@property (class, readonly, copy, nonatomic) NSString *baseMailDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *mailAccountDirectoryPath;
@property (class, readonly, copy, nonatomic) NSString *mailDataDirectoryPath;
@property (class, readonly, nonatomic) NSURL *baseMailDirectory;
@property (class, readonly, nonatomic) NSURL *mailAccountDirectory;
@property (class, readonly, nonatomic) NSURL *mailDataDirectory;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_nonContainerizedBaseMailDirectoryPathCreated:(BOOL *)a0;


@end

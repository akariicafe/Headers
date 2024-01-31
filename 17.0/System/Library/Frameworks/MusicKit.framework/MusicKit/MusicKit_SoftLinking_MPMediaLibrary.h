@class NSString, NSArray, MPMediaLibrary, NSOperationQueue;

@interface MusicKit_SoftLinking_MPMediaLibrary : NSObject {
    MPMediaLibrary *_underlyingMediaLibrary;
    NSOperationQueue *_operationQueue;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPMediaLibrary *deviceLibrary;
@property (class, readonly, nonatomic) NSString *libraryDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *libraryDynamicPropertiesDidChangeNotificationName;
@property (class, readonly, nonatomic) NSArray *sharedLibraries;
@property (class, readonly, nonatomic) NSString *availableMediaLibrariesDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *libraryConnectionProgressDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *libraryStatusDidChangeNotificationName;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) float connectionProgress;
@property (readonly, nonatomic) BOOL isHomeSharingLibrary;

+ (void)endDiscoveringMediaLibraries;
+ (void)beginDiscoveringMediaLibraries;
+ (void)_handleAvailableLibrariesDidChangeNotification:(id)a0;

- (void)endGeneratingLibraryChangeNotifications;
- (void)disconnect;
- (unsigned long long)hash;
- (void)beginGeneratingLibraryChangeNotifications;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)connectWithCompletionHandler:(id /* block */)a0;
- (void)performOperation:(id)a0;
- (void)_handleLibraryDidChangeNotification:(id)a0;
- (id)_underlyingMediaLibrary;
- (long long)downloadSizeForModelObject:(id)a0 includingNonLibraryContent:(BOOL)a1;
- (id)initWithUnderlyingMediaLibrary:(id)a0;
- (void)_handleLibraryConnectionProgressDidChangeNotification:(id)a0;
- (void)_handleLibraryDynamicPropertiesDidChangeNotification:(id)a0;
- (void)_handleLibraryStatusDidChangeNotification:(id)a0;
- (id)_initWithUnderlyingMediaLibrary:(id)a0;
- (void)sdk_addItemToLibraryWithStoreID:(id)a0 completionHandler:(id /* block */)a1;

@end

@class NSUUID, NSSet, NSURL, PRSPosterPath, NSString, NSFileManager;

@interface PRSPosterConfigurationAttributes : NSObject {
    NSFileManager *_fileManager;
}

@property (readonly, copy, nonatomic) NSUUID *posterUUID;
@property (readonly, copy, nonatomic) NSURL *identifierURL;
@property (readonly, copy, nonatomic) NSURL *providerURL;
@property (readonly, nonatomic) NSSet *snapshotURLs;
@property (readonly, nonatomic) PRSPosterPath *path;
@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) NSString *extensionIdentifier;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 extensionIdentifier:(id)a1;
- (id)_initWithPath:(id)a0 extensionIdentifier:(id)a1 posterUUID:(id)a2 providerURL:(id)a3 fileManager:(id)a4;

@end

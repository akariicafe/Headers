@class NSString, NSArray, NSURL, DEDBugSession, DEDExtensionIdentifier;

@interface DEDAttachmentGroup : NSObject <DEDSecureArchiving>

@property (retain, nonatomic) DEDExtensionIdentifier *dedExtensionIdentifier;
@property (retain) DEDBugSession *fromBugSession;
@property (retain) NSString *deviceID;
@property (retain) NSURL *rootURL;
@property (retain) NSString *displayName;
@property (retain) NSString *extensionID;
@property (retain) NSArray *attachmentItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)groupWithDEGroup:(id)a0 identifier:(id)a1;
+ (id)groupWithDictionary:(id)a0;

- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isLocal;
- (id)archiveName;
- (id)totalFileSize;

@end

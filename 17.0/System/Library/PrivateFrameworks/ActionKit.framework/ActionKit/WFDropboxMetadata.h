@class NSString, NSDictionary, NSDate, NSNumber;

@interface WFDropboxMetadata : MTLModel <WFRemoteFile, WFNaming, MTLJSONSerializing, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *itemKind;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *revision;
@property (readonly, copy, nonatomic) NSString *contentHash;
@property (readonly, nonatomic) NSNumber *fileSize;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) NSDate *clientModifiedDate;
@property (readonly, nonatomic) NSDate *serverModifiedDate;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)clientModifiedDateJSONTransformer;
+ (id)serverModifiedDateJSONTransformer;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)wfFileType;
- (id)wfFileSize;
- (BOOL)wfIsDirectory;
- (BOOL)wfIsEqualToFile:(id)a0;
- (id)wfLastModifiedDate;
- (id)wfPath;

@end

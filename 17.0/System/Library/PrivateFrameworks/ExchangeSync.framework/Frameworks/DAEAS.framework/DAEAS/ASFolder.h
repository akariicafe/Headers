@class NSString;

@interface ASFolder : ASItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *parentID;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) int folderType;
@property (nonatomic) long long dataclass;
@property (nonatomic) int localID;
@property (copy, nonatomic) NSString *serverID;
@property (copy, nonatomic) NSString *localUUID;
@property (nonatomic) unsigned long long changeType;
@property (nonatomic) BOOL renameOnCollision;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_folderTypeString;
- (id)initWithFolderType:(int)a0 serverID:(id)a1 parentID:(id)a2 displayName:(id)a3 localID:(int)a4;
- (BOOL)mayContainDataclasses:(long long)a0;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;
- (void)setFolderTypeNumber:(id)a0;

@end

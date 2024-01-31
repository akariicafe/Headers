@class NSData, NSString;

@interface NSFileProviderItemVersion : NSObject <NSSecureCoding>

@property (class, readonly) NSData *beforeFirstSyncComponent;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *lastEditorDeviceName;
@property (readonly, nonatomic) NSData *contentVersion;
@property (readonly, nonatomic) NSData *metadataVersion;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1 lastEditorDeviceName:(id)a2;
- (id)description;
- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1;
- (void).cxx_destruct;
- (id)versionRewritingBeforeFirstSync;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)etagHash;
- (BOOL)isEmpty;

@end

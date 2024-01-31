@class NSUUID, NSArray, NSString, NSData;

@interface STKSticker : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ representations;
    void /* unknown type, empty encoding */ accessibilityName;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ externalURI;
    void /* unknown type, empty encoding */ _companionRecentUUID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, copy) NSArray *representations;
@property (nonatomic, copy) NSString *accessibilityName;
@property (nonatomic) void /* unknown type, empty encoding */ byteCount;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) void /* unknown type, empty encoding */ effect;
@property (nonatomic, copy) NSData *metadata;
@property (nonatomic, copy) NSString *externalURI;
@property (nonatomic, retain) void /* unknown type, empty encoding */ attributionInfo;
@property (nonatomic) void /* unknown type, empty encoding */ creationDate;
@property (nonatomic) void /* unknown type, empty encoding */ lastUsedDate;
@property (nonatomic) void /* unknown type, empty encoding */ libraryIndex;
@property (nonatomic, copy) NSUUID *_companionRecentUUID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end

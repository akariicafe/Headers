@class NSUUID, UTType, NSData, NSString;

@interface STKStickerRepresentation : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ uti;
    void /* unknown type, empty encoding */ role;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, readonly) UTType *uti;
@property (nonatomic) void /* unknown type, empty encoding */ byteCount;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ size;
@property (nonatomic, copy) NSString *role;
@property (nonatomic) void /* unknown type, empty encoding */ isPreferred;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ version;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end

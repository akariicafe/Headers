@class _STKStickerRepresentationRole, NSUUID, UTType, NSData, NSString;

@interface _STKStickerRepresentation : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ stickerIdentifier;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ uti;
    void /* unknown type, empty encoding */ role;
}

@property (class, nonatomic, readonly) _STKStickerRepresentationRole *roles;

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSUUID *stickerIdentifier;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) UTType *uti;
@property (nonatomic, readonly) NSString *role;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ size;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ effect;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end

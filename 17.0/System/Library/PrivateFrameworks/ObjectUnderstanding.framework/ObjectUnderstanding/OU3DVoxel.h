@class NSUUID;

@interface OU3DVoxel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ center;
@property (nonatomic) void /* unknown type, empty encoding */ size;
@property (nonatomic) unsigned char semantic_label;
@property (retain, nonatomic) NSUUID *object_id;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

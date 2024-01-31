@class PCMapLocation;

@interface PCMapRoute : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PCMapLocation *startLocation;
@property (retain, nonatomic) PCMapLocation *endLocation;
@property (nonatomic) BOOL hasEndLocation;

+ (id)decodeFromBlindChannelData:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodeAsBlindChannelData;

@end

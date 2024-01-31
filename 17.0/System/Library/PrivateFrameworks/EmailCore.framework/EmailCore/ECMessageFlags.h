@class NSString;

@interface ECMessageFlags : NSObject <ECMessageFlagsBuilder, NSCopying, NSSecureCoding, EFPubliclyDescribable> {
    union ECMessageFlagsHashedBitField { unsigned long long hashValue; struct { unsigned char read : 1; unsigned char deleted : 1; unsigned char replied : 1; unsigned char flagged : 1; unsigned char draft : 1; unsigned char forwarded : 1; unsigned char redirected : 1; unsigned char junkLevelSetByUser : 1; unsigned char junkLevel : 2; unsigned char flagColor : 3; } bitField; } _storage;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL read;
@property (nonatomic) BOOL deleted;
@property (nonatomic) BOOL replied;
@property (nonatomic) BOOL flagged;
@property (nonatomic) BOOL draft;
@property (nonatomic) BOOL forwarded;
@property (nonatomic) BOOL redirected;
@property (nonatomic) BOOL junkLevelSetByUser;
@property (nonatomic) unsigned long long junkLevel;
@property (nonatomic) unsigned long long flagColor;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cachedFlagsWithHash:(unsigned long long)a0 generator:(id /* block */)a1;

- (id)initWithBuilder:(id /* block */)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHash:(unsigned long long)a0;
- (id)_flagColorDebugDescription;
- (id)_junkLevelDebugDescription;

@end

@class NSString, _BlastDoorLPPlatformColor;

@interface _BlastDoorLPImageProperties : NSObject <NSCopying>

@property (copy, nonatomic) NSString *accessibilityText;
@property (nonatomic) long long type;
@property (retain, nonatomic) _BlastDoorLPPlatformColor *overlaidTextColor;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class NSArray;

@interface MBBackgroundRestoreInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property int dataClassesRemaining;
@property unsigned long long bytesRemaining;
@property (retain) NSArray *failedDomains;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class NSString;

@interface SAVolumeSizeInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long used;
@property unsigned long long rawUsed;
@property unsigned long long capacity;
@property unsigned long long purgeableSize;
@property (retain) NSString *mountedOn;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

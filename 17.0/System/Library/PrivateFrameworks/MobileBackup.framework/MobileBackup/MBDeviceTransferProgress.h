@class NSString, NSDate;

@interface MBDeviceTransferProgress : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *phaseDescription;
@property (nonatomic) unsigned long long phase;
@property (nonatomic) double progress;
@property (nonatomic) long long minutesRemaining;
@property (retain, nonatomic) NSDate *fileTransferStartDate;
@property (retain, nonatomic) NSDate *restoreStartDate;
@property (nonatomic) unsigned long long filesTransferred;
@property (nonatomic) unsigned long long bytesTransferred;
@property (nonatomic) unsigned long long totalByteCount;
@property (nonatomic) unsigned long long totalFileCount;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class NSUUID, SUAutoInstallForecast;

@interface _SUAutoInstallOperationModel : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *id;
@property (retain, nonatomic) SUAutoInstallForecast *forecast;
@property (nonatomic) int agreementStatus;
@property (nonatomic) BOOL waitingUntilDownloadComplete;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

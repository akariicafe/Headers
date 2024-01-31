@class BDSReadingHistoryServiceStatus;

@interface BDSReadingHistoryServiceStatusInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BDSReadingHistoryServiceStatus *status;
@property (readonly, nonatomic) BOOL isLoaded;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIsLoaded:(BOOL)a0;

@end

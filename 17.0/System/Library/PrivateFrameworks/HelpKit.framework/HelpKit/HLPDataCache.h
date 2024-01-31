@class NSString, NSDate;

@interface HLPDataCache : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL expired;
@property (nonatomic) unsigned long long cacheType;
@property (nonatomic) long long maxAge;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *lastModified;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSDate *updatedDate;

- (BOOL)expired;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

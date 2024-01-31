@class NSString, NSArray;

@interface FCTodayFeedConfigRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long feedType;
@property (readonly, copy, nonatomic) NSString *forYouConfigID;
@property (readonly, copy, nonatomic) NSString *formatVersion;
@property (readonly, copy, nonatomic) NSArray *additionalRecordIDs;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFeedType:(unsigned long long)a0 forYouConfigID:(id)a1 formatVersion:(id)a2 additionalRecordIDs:(id)a3;

@end

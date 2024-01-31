@class NSDictionary, NSString, NSDate;

@interface WLKEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *canonicalID;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *nowPlayingPassThrough;
@property (readonly, nonatomic) unsigned long long contentType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

@class NSString, NSURL, NSDate;

@interface WFSevereWeatherEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *areaName;
@property (readonly, copy, nonatomic) NSString *eventDescription;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) unsigned long long importance;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 areaName:(id)a1 eventDescription:(id)a2 source:(id)a3 expirationDate:(id)a4 URL:(id)a5 importance:(unsigned long long)a6;

@end

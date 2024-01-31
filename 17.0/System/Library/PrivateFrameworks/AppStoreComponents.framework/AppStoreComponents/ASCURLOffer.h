@class NSArray, NSDictionary, NSURL, NSString, NSNumber, ASCAdamID;

@interface ASCURLOffer : NSObject <ASCOffer, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isSensitive;
@property (readonly, copy, nonatomic) ASCAdamID *id;
@property (readonly, copy, nonatomic) NSDictionary *titles;
@property (readonly, copy, nonatomic) NSDictionary *subtitles;
@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) NSNumber *ageRating;
@property (readonly, nonatomic) NSArray *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithID:(id)a0 titles:(id)a1 subtitles:(id)a2 flags:(long long)a3 ageRating:(id)a4 metrics:(id)a5 url:(id)a6 isSensitive:(BOOL)a7;
- (id)offerWithMetrics:(id)a0;

@end

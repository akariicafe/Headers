@class NSString, NSURL, NSData, NSDate;

@interface FKMapsItem : NSObject <NSCopying>

@property (nonatomic) unsigned long long muid;
@property (nonatomic) int resultProviderIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic, setter=setURL:) NSURL *url;
@property (copy, nonatomic) NSURL *heroImageURL;
@property (copy, nonatomic) NSString *heroImageAttributionName;
@property (nonatomic) unsigned long long category;
@property (copy, nonatomic) NSString *mapsCategoryIdentifier;
@property (retain, nonatomic) NSData *encodedStylingInfo;
@property (copy, nonatomic) NSURL *businessChatURL;
@property (copy, nonatomic) NSDate *lastProcessedDate;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMUID:(unsigned long long)a0 resultProviderIdentifier:(int)a1 name:(id)a2 phoneNumber:(id)a3 url:(id)a4 heroImageURL:(id)a5 heroImageAttributionName:(id)a6 category:(unsigned long long)a7 mapsCategoryIdentifier:(id)a8 encodedStylingInfo:(id)a9 businessChatURL:(id)a10 lastProcessedDate:(id)a11;

@end

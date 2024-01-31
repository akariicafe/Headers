@class NSString, ICQLink, NSDictionary;

@interface _ICQButtonSpecification : NSObject {
    NSDictionary *_serverDict;
    ICQLink *_buttonLink;
}

@property (readonly, nonatomic) NSString *buttonFormat;
@property (readonly, nonatomic) ICQLink *buttonLink;
@property (readonly, nonatomic) NSString *textFormat;
@property (readonly, nonatomic) NSString *linkFormat;
@property (retain, nonatomic) NSDictionary *linkForBundleIdentifier;

+ (id)buttonSpecificationSampleForLevel:(long long)a0;

- (id)initWithServerDictionary:(id)a0;
- (void).cxx_destruct;
- (id)linkForBundleIdentifier:(id)a0;

@end

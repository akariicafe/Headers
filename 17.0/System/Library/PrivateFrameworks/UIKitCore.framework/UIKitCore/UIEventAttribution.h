@class NSURL, NSString;

@interface UIEventAttribution : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char sourceIdentifier;
@property (readonly, copy, nonatomic) NSURL *destinationURL;
@property (readonly, copy, nonatomic) NSURL *reportEndpoint;
@property (readonly, copy, nonatomic) NSString *sourceDescription;
@property (readonly, copy, nonatomic) NSString *purchaser;

- (unsigned long long)hash;
- (id)initWithSourceIdentifier:(unsigned char)a0 destinationURL:(id)a1 sourceDescription:(id)a2 purchaser:(id)a3;
- (id)toUISClickAttribution;
- (void).cxx_destruct;
- (id)initWithUISClickAttribution:(id)a0;
- (id)initWithSourceIdentifier:(unsigned char)a0 destinationURL:(id)a1 reportEndpoint:(id)a2 sourceDescription:(id)a3 purchaser:(id)a4;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class NSString;

@interface GKSupportedTransport : GKInternalRepresentation

@property (readonly, retain, nonatomic) NSString *name;
@property (nonatomic) long long version;

+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithVersionNumber:(id)a0;

@end

@class NSData, NSString;

@interface HMBLocalZoneIDUnshared : HMFObject <HMBLocalZoneID>

@property (readonly, nonatomic) NSData *token;
@property (readonly, nonatomic) NSString *name;

+ (id)shortDescription;

- (unsigned long long)hash;
- (id)labels;
- (id)initWithName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

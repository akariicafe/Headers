@class NSString;

@interface CWFChannel : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long channel;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) unsigned int band;
@property (readonly, nonatomic) BOOL is2GHz;
@property (readonly, nonatomic) BOOL is5GHz;
@property (readonly, nonatomic) BOOL is6GHz;
@property (readonly, nonatomic) BOOL is6GHzPSC;
@property (readonly, nonatomic) BOOL isDFS;

+ (id)channelWithNumber:(unsigned long long)a0 band:(unsigned int)a1 width:(int)a2;

- (id)JSONCompatibleKeyValueMap;
- (BOOL)is6GHz;
- (BOOL)isEqualToChannel:(id)a0;
- (BOOL)is2GHz;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isDFS;
- (int)width;
- (BOOL)is5GHz;
- (BOOL)extAbove;
- (BOOL)isEqual:(id)a0;
- (BOOL)is6GHzPSC;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

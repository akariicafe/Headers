@class NSString;

@interface BKSDisplayArrangementItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *displayUUID;
@property (readonly, copy, nonatomic) NSString *relativeDisplayUUID;
@property (readonly, nonatomic) unsigned int edge;
@property (readonly, nonatomic) double offset;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayUUID:(id)a0 relativeToDisplayUUID:(id)a1 alongEdge:(unsigned int)a2 atOffset:(double)a3;

@end

@class NSString;

@interface SBSRelativeDisplayArrangement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *displayIdentifier;
@property (readonly, nonatomic) unsigned int edge;
@property (readonly, nonatomic) double offset;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayIdentifier:(id)a0 edge:(unsigned int)a1 offset:(double)a2;

@end

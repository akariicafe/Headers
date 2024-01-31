@class STMediaChannel;

@interface STShowChannelRequest : AFSiriRequest

@property (readonly, nonatomic) STMediaChannel *channel;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithChannel:(id)a0;

@end

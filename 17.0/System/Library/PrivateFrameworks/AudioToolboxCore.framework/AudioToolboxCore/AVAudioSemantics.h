@class NSArray;

@interface AVAudioSemantics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *channelGroups;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAudioSemantics:(struct __CFArray { } *)a0;
- (id)initWithChannelGroups:(id)a0;

@end

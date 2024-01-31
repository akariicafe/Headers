@class NSString, NSData;

@interface MPCustomDataPlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *data;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)initWithIdentifier:(id)a0 data:(id)a1;
- (id)initWithIdentifier:(id)a0 data:(id)a1 options:(id)a2;

@end

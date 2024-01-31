@class NSString, NSData;

@interface GTReplayUpdateLibraryCache : GTReplayRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSData *data;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

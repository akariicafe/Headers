@class NSData, NSError;

@interface GTReplayResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) union GTDataVersion { struct { unsigned int version; unsigned int type; } ; unsigned long long value; } version;
@property (nonatomic) unsigned long long requestID;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSError *error;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

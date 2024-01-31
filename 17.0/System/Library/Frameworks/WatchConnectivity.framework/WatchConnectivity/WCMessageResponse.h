@class NSError;

@interface WCMessageResponse : WCMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSError *error;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end

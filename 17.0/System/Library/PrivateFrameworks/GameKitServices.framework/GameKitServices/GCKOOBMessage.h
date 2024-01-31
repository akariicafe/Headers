@class NSData;

@interface GCKOOBMessage : NSObject <NSSecureCoding> {
    unsigned int type;
    unsigned int band;
    NSData *data;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned int)band;
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)data;
- (unsigned int)type;
- (id)initWithCoder:(id)a0;

@end

@class NSString;

@interface CoreIDVShared.PRDMetadata : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ stage2;
    void /* unknown type, empty encoding */ timestamp;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

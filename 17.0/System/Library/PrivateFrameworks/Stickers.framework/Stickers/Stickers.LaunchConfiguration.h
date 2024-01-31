@class NSString;

@interface Stickers.LaunchConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ sectionType;
    void /* unknown type, empty encoding */ identifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) void /* unknown type, empty encoding */ creationDate;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

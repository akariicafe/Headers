@class NSString;

@interface DRPasteAnnouncementEndpoint : NSObject <NSSecureCoding> {
    NSString *_localizedName;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)localizedName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithLocalizedName:(id)a0;

@end

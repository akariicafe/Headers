@protocol BMBookmark;

@interface WFSettingsClientBookmark : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<BMBookmark> biomeBookmark;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)actionReversalState;
- (id)initWithActionReversalState:(id)a0;
- (id)initWithBiomeBookmark:(id)a0;

@end

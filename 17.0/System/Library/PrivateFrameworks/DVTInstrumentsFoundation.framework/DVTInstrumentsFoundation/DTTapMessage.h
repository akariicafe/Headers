@class NSMutableDictionary;

@interface DTTapMessage : NSObject <NSSecureCoding> {
    NSMutableDictionary *_plist;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int kind;

+ (void)initialize;

- (id)init;
- (id)plist;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initAsKind:(int)a0;

@end

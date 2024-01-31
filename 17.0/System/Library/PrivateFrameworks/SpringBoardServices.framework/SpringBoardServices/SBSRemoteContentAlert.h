@class NSString, NSArray, SBSRemoteContentAlertAction, NSMutableArray;

@interface SBSRemoteContentAlert : NSObject <NSSecureCoding> {
    long long _preferredStyle;
    NSMutableArray *_actions;
    SBSRemoteContentAlertAction *_preferredAction;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (readonly, nonatomic) long long preferredStyle;
@property (readonly, nonatomic) NSArray *actions;

- (unsigned long long)hash;
- (void)addAction:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 preferredStyle:(long long)a2;

@end
